#include <stdio.h>

#define T 2
#define S 1

intar *notes[] = {
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
  }; main(int argc, char const *argv[]) {
  ch

  int major[] = {
    T, T, S, T, T, T, S
  };

  int minor[] = {
    T, S, T, T, S, T, T
  };

size_t position = 0;
size_t i;

for (i = 0; i < ( sizeof(major) / sizeof(major[0]) ); i++) {
  printf("%s\n", notes[position]);
  position += major[i];
}

  return 0;
}
