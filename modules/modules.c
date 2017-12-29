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

int modMath(int base)
{
  return (base %= notesLength);  
}

int *ptrArrayOffset(int *srcArray[], int *targetArray[], int arrayLength, size_t offset)
{
  size_t i;

  for (i = 0; i < arrayLength; i++)
  {
    targetArray[i] = srcArray[offset];
    offset++;
    if (offset >= arrayLength)
    {
      offset %= arrayLength;
    }
  }
}

void strReplace(char str[], char replace[], int offset)
{
  size_t i;
  if (strlen(str) > (strlen(replace) + offset))
  {
    for (i = 0; i < strlen(replace); i++)
    {
      str[offset + i] = replace[i];
    }
  }
}
