#include "modules/modules.h"
#include "modules/calcNote.h"
#include "modules/printNote.h"
#include "modules/noteConv.h"
#include "modules/menu/menu.h"

int main(void) {

    char currentKey[] = "E";
    int R = convertNoteInt(notes, currentKey, notesLength);
    int H = 1;
    int W = 2;

    int m2 = modMath(R + H);
    int M2 = modMath(R + W);
    int m3 = modMath(R + W + H);
    int M3 = modMath(R + W + W);
    int P4 = modMath(R + (2 * W) + H);
    int tri = modMath(R + (3 * W));
    int P5 = modMath(R + (3 * W) + H);
    int m6 = modMath(R + (4 * W));
    int M6 = modMath(R + (4 * W) + H);
    int m7 = modMath(R + (5 * W));
    int M7 = modMath(R + (5 * W) + H);

    int *ionian[] = {
      &R,
      &M2,
      &M3,
      &P4,
      &P5,
      &M6,
      &M7
    };

    int scaleLength = sizeof(ionian) / sizeof(ionian[0]);

  //tonic scales

    int *dorian[] = {
      &R,
      &M2,
      &m3,
      &P4,
      &P5,
      &M6,
      &m7
    };

    int *phrygian[] = {
      &R,
      &m2,
      &m3,
      &P4,
      &P5,
      &m6,
      &m7
    };

    int *lydian[] = {
      &R,
      &M2,
      &M3,
      &tri,
      &P5,
      &M6,
      &M7
    };

    int *mixolydian[] = {
      &R,
      &M2,
      &M3,
      &P4,
      &P5,
      &M6,
      &m7
    };

    int *aeolian[] = {
      &R,
      &M2,
      &m3,
      &P4,
      &P5,
      &m6,
      &m7
    };

    int *locrian[] = {
      &R,
      &m2,
      &m3,
      &P4,
      &tri,
      &m6,
      &m7
    };

    void changeIntervals(char *notesArray[], char tuningRoot[], int notesLength) {
      //changes all interval values, which are integers, based on the new root ( a string )
      R = convertNoteInt(notes, tuningRoot, notesLength);

      m2 = modMath(R + H);
      M2 = modMath(R + W);
      m3 = modMath(R + W + H);
      M3 = modMath(R + W + W);
      P4 = modMath(R + (2 * W) + H);
      P5 = modMath(R + (3 * W) + H);
      m6 = modMath(R + (4 * W));
      M6 = modMath(R + (4 * W) + H);
      m7 = modMath(R + (5 * W));
      M7 = modMath(R + (5 * W) + H);
    }

  while (strcmp(choice, "E") != 0 && strcmp(choice, "e") != 0) {
      displayMenu(menuItems, menuLength);
      prompt();
      if (strcmp(choice, "1") == 0) {
        printStrings(notes, tuning, notesLength, getStringLen(), neckSize);
      } else if (strcmp(choice, "2") == 0) {
        inputNeckSize();
      } else if (strcmp(choice, "3") == 0) {
        printf("New key: ");
        scanf("%s", currentKey);
        changeIntervals(notes, currentKey, notesLength);
      } else if (strcmp(choice, "4") == 0) {
          while (strcmp(choice, "B") != 0 && strcmp(choice, "b") != 0) {
            displayMenu(modesMenu, modesLength);
            prompt();
            if(strcmp(choice, "1") == 0) {
                puts("Ionian:");
                printScaleString(notes, notesLength, ionian, scaleLength, tuning, getStringLen(), neckSize);
            } else if(strcmp(choice, "2") == 0) {
                puts("Dorian:");
                printScaleString(notes, notesLength, dorian, scaleLength, tuning, getStringLen(), neckSize);
            } else if(strcmp(choice, "3") == 0) {
                puts("Phrygian:");
                printScaleString(notes, notesLength, phrygian, scaleLength, tuning, getStringLen(), neckSize);
            } else if(strcmp(choice, "4") == 0) {
                puts("Lydian:");
                printScaleString(notes, notesLength, lydian, scaleLength, tuning, getStringLen(), neckSize);
            } else if(strcmp(choice, "5") == 0) {
                puts("Mixolydian:");
                printScaleString(notes, notesLength, mixolydian, scaleLength, tuning, getStringLen(), neckSize);
            } else if(strcmp(choice, "6") == 0) {
                puts("Aeolian:");
                printScaleString(notes, notesLength, aeolian, scaleLength, tuning, getStringLen(), neckSize);
            } else if(strcmp(choice, "7") == 0) {
                puts("Locrian:");
                printScaleString(notes, notesLength, locrian, scaleLength, tuning, getStringLen(), neckSize);
            }
          }
        }
      }

  return 0;
}
