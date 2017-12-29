#include "noteConv.h"

int convertNoteInt(char *noteArray[], char stringNote[], int arrayLength)
{
    //Converts string to integer.
    size_t i;

    for (i = 0; i < arrayLength; i++)
    {
        if (strcmp(noteArray[i], stringNote) == 0)
        {
            return i;
        }
    }
}

char *convertNoteStr(char *noteArray[], int noteInt, int arrayLength)
{
    //Converts integer to string.
    if (noteInt >= arrayLength)
    {
        noteInt %= arrayLength;
    }
    return noteArray[noteInt];
}
