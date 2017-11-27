#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char *notes[];
extern int notesLength;

extern char *tuning[];
extern int tuningLength;

int modMath(int base);

int *ptrArrayOffset(int *srcArray[], int *targetArray[], int arrayLength, size_t offset);

int numericPositionRoot(char *root);

int convertNoteInt(char *noteArray[], char stringNote[], int arrayLength);

char *convertNoteStr(char *noteArray[], int noteInt, int arrayLength);

int calcNoteInt(char *noteArray[], int baseNote, int addNote, int arrayLength);

char *calcNoteStr(char *noteArray[], char baseString[], char addString[], int arrayLength);

char *calcNote(char *noteArray[], char baseString[], int addInt, int arrayLength);

void strReplace(char str[], char replace[], int offset);

void neckHeader(int fretLength);

void printStrings(char *noteArray[], char *tuning[], int notesLength, int tuningLength, int fretLength);

void printScaleString(char *notesArray[], int notesLength, int *scale[], int scaleLength, char *tuning[], int tuningLength, int fretLength);

void printScaleStringSingle(char *notesArray[], int notesLength, int *scale[], int scaleLength, char tuningRoot[], int fretLength);

void changeIntervals(char *notesArray[], char tuningRoot[], int notesLength);



//Needs work
// void printScaleAll(char *notesArray[], char *tuning[], int scale[], int scaleLength, int notesLength, int fretLength);
