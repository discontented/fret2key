// #include "chords.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {

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

  int R = 0;
  int H = 1;
  int W = 2;

  int *M3 = &R + &W + &W; //major third
  int m3 = R + W + H; //minor third
  int P4 = R + (2 * W) + H;
  int P5 = R + (3 * W) + H;
  int m6 = R + (4 * W);
  int M6 = R + (4 * W) + H;
  int m7 = R + (5 * W);
  int M7 = R + (5 * W) + H;

//functions
  int flat(int note) {
    return (note - H);
  }

  int sharp(int note) {
    return (note + H);
  }

  int augment(int note) {

  }

//Only works if first array is char and second is integer.
  void variableLoop(char *baseArray[], int loopArray[], int loopArraySize) {
    int i = loopArray[0]; //first value in array
    int c = 0; //counter

//Must give loopArraySize since C has no way to calculate size within a function.
    printf("Number of notes in chord: %d\n", loopArraySize);

    for (c = 0;c < loopArraySize;c++) {
      i = loopArray[c];
      printf("%s\n", baseArray[i]);
    }

  }

  int majorTriad[] = {
    R, M3, P5
  };

  int minorTriad[] = {
    R, M3, P5
  };

  int majorSeventh[] = {
    R, M3, P5, M7
  };

  int minorSeventh[] = {
    R, m3, P5, m7
  };

  int diminishedSeventh[] = {
    R, M3, P5, m7
  };

  int halfDiminishedSeventh[] = {
    R, m3, flat(P5), m7
  };


  variableLoop(notes, majorTriad, 3);
  variableLoop(notes, majorSeventh, 4);
  variableLoop(notes, halfDiminishedSeventh, 4);

return 0;
}
