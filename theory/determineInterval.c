#include "determineInterval.h"

int noteDifference(char tonic[], char compareNote[]) {
  int result = convertNoteInt(notes, tonic, notesLength) - convertNoteInt(notes, compareNote, notesLength);
  result = abs(result);

  return result;
}
void determineInterval(char tonic[], char compareNote[]) {
  int interval = noteDifference(tonic, compareNote);

  switch (interval) {
    case 0:
      puts("Unison");
    case 1:
      puts("m2");
      break;
    case 2:
      puts("M2");
      break;
    case 3:
      puts("m3");
      break;
    case 4:
      puts("M3");
      break;
    case 5:
      puts("P4");
      break;
    case 6:
      puts("Tritone");
      break;
    case 7:
      puts("P5");
      break;
    case 8:
      puts("m6");
      break;
    case 9:
      puts("M6");
      break;
    case 10:
      puts("m7");
      break;
    case 11:
      puts("M7");
      break;
    case 12:
      puts("Octave");
      break;
  }
}

int main(void) {
  printf("%d\n", abs(-2));

  int distance = noteDifference("E", "A");
  printf("%d\n", distance);
  determineInterval("E", "B");
  return 0;
}
