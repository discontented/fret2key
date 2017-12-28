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

  int chromaticScale[] = { 0, 1 , 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

  int major[] = { 0, 2, 4, 5, 7, 9, 11 };

size_t i;

for (i = 0; i < sizeof(major) / sizeof(major[0]); i++) {
  puts(notes[major[i]]);
}

  return 0;
}
