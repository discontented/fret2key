#include "menu.h"

char *menuItems[] = {
  "1 - Display Fretboard",
  "2 - Change Number of Frets",
  "3 - Set Key",
  "4 - Display Scales",
  "E - Exit"
};

char *modesMenu[] = {
  "1 - Ionian",
  "2 - Dorian",
  "3 - Phrygian",
  "4 - Lydian",
  "5 - Mixolydian",
  "6 - Aeolian",
  "7 - Locrian",
  "B - Back"
};

int menuLength = sizeof (menuItems) / sizeof (menuItems[0]);

int modesLength = sizeof (modesMenu) / sizeof (modesMenu[0]);

int neckSize = 21;

char choice[1];

void displayMenu(char *items[], int length) {
    size_t i;
    for (i = 0; i < length; i++) {
        printf("%s\n", items[i]);
    }
};

void prompt() {
    printf("What's your choice? ");
    scanf("%1s", &choice);
};

void inputNeckSize() {
    printf("How many total frets does your guitar have? ");
    scanf("%d", &neckSize);
}
