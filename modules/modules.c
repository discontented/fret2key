#include "modules.h"

char *notes[] = {
    "C",
    "C#",
    "D",
    "D#",
    "E",
    "F",
    "F#",
    "G",
    "G#",
    "A",
    "A#",
    "B"
};

int notesLength = sizeof(notes) / sizeof(notes[0]);

char *tuning[] = {
	"E",
	"B",
	"G",
	"D",
	"A",
	"E"
};

int tuningLength = sizeof(tuning) / sizeof(tuning[0]);

int modMath(int base) {
  if(base >= notesLength) {
    base %= notesLength;
  }
  return base;
}

int *ptrArrayOffset(int *srcArray[], int *targetArray[], int arrayLength, size_t offset) {
  size_t i;

  for(i = 0; i < arrayLength; i++) {
    targetArray[i] = srcArray[offset];
    offset++;
    if(offset >= arrayLength) {
      offset %= arrayLength;
    }
  }
}

int numericPositionNote(char *note) {
  size_t i;

  for (i = 0; i < notesLength; i++) {
    if (strcmp(notes[i], note) == 0) {
      return i;
      break;
    }
  }
}

int convertNoteInt(char *noteArray[], char stringNote[], int arrayLength) {
  //Converts string to integer.
  size_t i;

  for(i = 0;i < arrayLength; i++)
  {
    if(strcmp(noteArray[i], stringNote) == 0)
    {
      return i;
    }
  }
}

char *convertNoteStr(char *noteArray[], int noteInt, int arrayLength) {
  //Converts integer to string.
  if(noteInt >= arrayLength)
  {
    noteInt %= arrayLength;
  }
  return noteArray[noteInt];
}

int calcNoteInt(char *noteArray[], int baseNote, int addNote, int arrayLength) {
  int result;
  result = baseNote + addNote;

  if(result >= arrayLength)
  {
      result %= arrayLength;
  }
  return result;
}

char *calcNoteStr(char *noteArray[], char baseString[], char addString[], int arrayLength) {
  int baseInteger = convertNoteInt(noteArray, baseString, arrayLength);
  int addInteger = convertNoteInt(noteArray, addString, arrayLength);

  int result = baseInteger + addInteger;

  return convertNoteStr(noteArray, result, arrayLength);
}

char *calcNote(char *noteArray[], char baseString[], int addInteger, int arrayLength) {
  int baseInteger = convertNoteInt(noteArray, baseString, arrayLength);

  int result = baseInteger + addInteger;

  return convertNoteStr(noteArray, result, arrayLength);
}

void strReplace(char str[], char replace[], int offset) {
  size_t i;
  if(strlen(str) > (strlen(replace) + offset))
  {
    for(i=0;i<strlen(replace);i++)
    {
        str[offset+i] = replace[i];
    }
  }
}

void neckHeader(int fretLength) {
  size_t i;
  printf("S|");
  for(i = 0;i < fretLength;i++) {
    char fret[] = "    |";
    char strToInt[3];
    sprintf(strToInt, "%d", i+1);
    strReplace(fret, strToInt, 1);
    printf("%s", fret);
  }
  printf("\n");
}

void printStrings(char *noteArray[], char *tuningArray[], int notesLength, int tuningLength, int fretLength) {
  size_t i;
  int currentFret;

  neckHeader(fretLength);

  for(i = 0;i < tuningLength;i++) {
    printf("%s|", tuningArray[i]);
    currentFret = 1;
    while(currentFret <= fretLength) {
      char fret[] = "    |";
      char *currentFretStr = calcNote(noteArray, tuningArray[i], currentFret, notesLength);
      strReplace(fret, currentFretStr, 1);
      printf("%s", fret);
      currentFret++;
    }
    printf("\n");
  }
}

void printScaleString(char *notesArray[], int notesLength, int *scale[], int scaleLength, char *tuning[], int tuningLength, int fretLength)
{
  //local variables
  size_t s;
  size_t i;

  int currentFret;

  neckHeader(fretLength);

  for(s = 0; s < tuningLength; s++) {
    currentFret = 0;

    while(currentFret <= fretLength) {
      char fret[] = "    |";
      char *fretNote = calcNote(notes, tuning[s], currentFret, notesLength);

      for(i = 0;i < scaleLength;i++) {
        char *intervalNote = convertNoteStr(notes, *scale[i], notesLength);

        if(strcmp(fretNote, intervalNote) == 0) {
          strReplace(fret, intervalNote, 1);
        }
      }
      if(currentFret == 0) {
        printf("%s|", fretNote);
        currentFret++;
      } else {
        printf("%s", fret);
        currentFret++;
      }
    }
    printf("\n");
  }
}
