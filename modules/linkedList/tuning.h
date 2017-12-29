#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct linkedList
{
    char data[2];
    struct linkedList *next;
};

typedef struct linkedList node;

extern int stringLength;

void printList(node *head);

void setTuning(node *head);

void stringPrompt();

int getStringLen();