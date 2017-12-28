#include <stdio.h>
#define R 0
#define H 1
#define W 2

extern char *notes[];

// extern int R;
// extern int H;
// extern int W;

extern int M3;
extern int m3;
extern int P4;
extern int P5;
extern int m6;
extern int M6;
extern int m7;
extern int M7;

extern int majorTriad[];
extern int minorTriad[];
extern int majorSeventh[];
extern int minorSeventh[];
extern int diminishedSeventh[];
extern int halfDiminishedSeventh[];

int flat(int note);
int sharp(int note);
int augment(int note);
void variableLoop(char *baseArray[], int loopArray[], int loopArraySize);
