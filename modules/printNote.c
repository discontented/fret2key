#include "printNote.h"

void neckHeader(int fretLength)
{
    size_t i;
    printf("S|");
    for (i = 0; i < fretLength; i++)
    {
        char fret[] = "    |";
        char strToInt[3];
        sprintf(strToInt, "%d", i + 1);
        strReplace(fret, strToInt, 1);
        printf("%s", fret);
    }
    printf("\n");
}

void printStrings(char *noteArray[], char *tuningArray[], int notesLength, int tuningLength, int fretLength)
{
    size_t i;
    int currentFret;

    neckHeader(fretLength);

    for (i = 0; i < tuningLength; i++)
    {
        printf("%s|", tuningArray[i]);
        currentFret = 1;
        while (currentFret <= fretLength)
        {
            char fret[] = "    |";
            char *currentFretStr = calcNote(noteArray, tuningArray[i], currentFret, notesLength);
            strReplace(fret, currentFretStr, 1);
            printf("%s", fret);
            currentFret++;
        }
        printf("\n");
    }
}

void printScaleString(char *notesArray[], int notesLength, int *scale[], int scaleLength, char *tuning[], int tuningLength, int fretLength)
{
    //local variables
    size_t s;
    size_t i;

    int currentFret;

    neckHeader(fretLength);

    for (s = 0; s < tuningLength; s++)
    {
        currentFret = 0;

        while (currentFret <= fretLength)
        {
            char fret[] = "    |";
            char *fretNote = calcNote(notes, tuning[s], currentFret, notesLength);

            for (i = 0; i < scaleLength; i++)
            {
                char *intervalNote = convertNoteStr(notes, *scale[i], notesLength);

                if (strcmp(fretNote, intervalNote) == 0)
                {
                    strReplace(fret, intervalNote, 1);
                }
            }
            if (currentFret == 0)
            {
                printf("%s|", fretNote);
                currentFret++;
            }
            else
            {
                printf("%s", fret);
                currentFret++;
            }
        }
        printf("\n");
    }
}