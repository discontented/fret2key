#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char *notes[];
extern int notesLength;

int modMath(int base);

int *ptrArrayOffset(int *srcArray[], int *targetArray[], int arrayLength, size_t offset);

void strReplace(char str[], char replace[], int offset);
