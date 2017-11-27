#include<stdio.h>
#include "../modules.h"

extern char *menuItems[];
extern char *modesMenu[];
extern int menuLength;
extern int modesLength;
extern int neckSize;
extern char choice[1];

void displayMenu(char *items[], int length);

void prompt();

void inputNeckSize();
