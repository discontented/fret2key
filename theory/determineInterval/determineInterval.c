#include "determineInterval.h"

int noteDifference(char tonic[], char compareNote[]) {
  int result = convertNoteInt(notes, tonic, notesLength) - convertNoteInt(notes, compareNote, notesLength);
  result = abs(result);

  return result;
}
char *determineInterval(char tonic[], char compareNote[]) {
  int interval = noteDifference(tonic, compareNote);

  switch (interval) {
    case 0:
      return "Unison";
    case 1:
      return "m2";
      break;
    case 2:
      return "M2";
      break;
    case 3:
      return "m3";
      break;
    case 4:
      return "M3";
      break;
    case 5:
      return "P4";
      break;
    case 6:
      return "Tritone";
      break;
    case 7:
      return "P5";
      break;
    case 8:
      return "m6";
      break;
    case 9:
      return "M6";
      break;
    case 10:
      return "m7";
      break;
    case 11:
      return "M7";
      break;
    case 12:
      return "Octave";
      break;
  }
}
