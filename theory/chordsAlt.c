#include<stdio.h>

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

  function findThird(char *array[], int root) {
    return *array[root + 2];
  }

//functions
  int flat(int note) {
    return (note - H);
  }

  int sharp(int note) {
    return (note + H);
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

  int triad() {
    findThird()
  }
