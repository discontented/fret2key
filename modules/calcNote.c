#include "#calcNote.h"

int numericPositionNote(char *note)
{
    size_t i;

    for (i = 0; i < notesLength; i++)
    {
        if (strcmp(notes[i], note) == 0)
        {
            return i;
            break;
        }
    }
}

int calcNoteInt(char *noteArray[], int baseNote, int addNote, int arrayLength)
{
    int result;
    result = baseNote + addNote;

    if (result >= arrayLength)
    {
        result %= arrayLength;
    }
    return result;
}

char *calcNoteStr(char *noteArray[], char baseString[], char addString[], int arrayLength)
{
    int baseInteger = convertNoteInt(noteArray, baseString, arrayLength);
    int addInteger = convertNoteInt(noteArray, addString, arrayLength);

    int result = baseInteger + addInteger;

    return convertNoteStr(noteArray, result, arrayLength);
}

char *calcNote(char *noteArray[], char baseString[], int addInteger, int arrayLength)
{
    int baseInteger = convertNoteInt(noteArray, baseString, arrayLength);

    int result = baseInteger + addInteger;

    return convertNoteStr(noteArray, result, arrayLength);
}