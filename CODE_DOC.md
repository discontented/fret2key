# File Descriptions

## main.c
Since certain variables of variables have to be declared locally, all variables should be declared here.

## menu -> menu.c
Contains all menu options as well as function for display and input.

# Functions and Variables

## modules
`char *notes[]`
String representations of notes program will use.  Notes are determined by position within this array and could be though of as the chromatic scale in C.  Index 0 of the array is 'C' and ends with index 11 as 'B'

`int notesLength`

    Calculates total number of notes in notes[].  Set to 12 for 12-TET system.

`char *tuning[]`

    Array containing notes for the tuning of the guitar.

`int tuningLength`
Number of strings.



`int *ptrArrayOffset(int *srcArray[], int *targetArray[], int arrayLength, size_t offset)`

`int numericPositionRoot(char *root)`

`int convertNoteInt(char *noteArray[], char stringNote[], int arrayLength)`
Converts a note to its integer value.  Takes string version of note as `stringNote[]` and returns the index within `*noteArray[]` if note is found.

`char *convertNoteStr(char *noteArray[], int noteInt, int arrayLength)`
Converts an integer representation of a note to its string representation.  Takes integer value as `noteInt`.  The integer value is the index of the note within `*notes[]`.  Returns the string representation of a note.

`int calcNoteInt(char *noteArray[], int baseNote, int addNote, int arrayLength)`

`char *calcNoteStr(char *noteArray[], char baseString[], char addString[], int arrayLength)`

`char *calcNote(char *noteArray[], char baseString[], int addInt, int arrayLength)`
Adds a number of positions as `addInt` to the note `baseString[]`.
<br>`arrayLength`


`int modMath(int base)`

Checks that the integer representing a note is less than or equal to notesLength, or the number of notes within the default chromatic scale.

# Old Code
The ideas behind this code needs to be updated and implemented into the existing functional version.  The code is stored for reference.

## menu -> welcome.c
Contains welcome function which will display logo of project.

## theory -> chordsOld.c
Contains main function
Creates chords through intervals

## theory -> chords.c
Attempts to make program more abstract by defining variables as constants.
Creates chords through variables which contain intervals from root.



## core -> draw.c
Contains drawFretboard() function.
Draws out empty fretboard as template.

## core ->drawTest.c
Includes main function that draws out fretboard with tuning letters.

## core -> notes -> notes.c
Contains chromatic scale array.

## core -> notes -> tuning.c
Contains standard 6-string tuning array.

## test -> notePosition.c
Function numericPositionNote() returns the numeric position of the note within the chromatic scale.
Pass the uppercase string to the function to get a numerical position.
Needs validation for when user doesn't input one of the 12 chromatic letters.

## theory -> scaleIntervalApproach()
Creates scale based off of notes array determined by positions.
Positions are stored in scale array, which will be used as the index on the notes array to display notes.
Loops through until reaches end of scale array.

## test -> guitarObject -> guitarStruct.c
The skeleton for creating a Guitar object which will hold the fret length, string length, tuning, etc.

## test -> modules -> newModules.c
Testing area for new modules
convertNoteInt - Converts note string to integer
convertNoteStr - Converts note integer to string
calcNoteInt - Calculates note position based on two integers representing note position.
calcNoteStr - Calculates new note in string format based on two notes inputted as strings.

## theory -> determineInterval -> determineInterval.c
noteDifference - Gets distance in int between two string notes.
determineInterval - Returns string of interval type between two string notes.

## test -> printString -> printString.c
Prints frets on guitar based on fret length and tuning with all note positions.

## test -> printString -> printIntervals.c
Prints frets on guitar based on a scale array containing intervals.

## test -> strManipulation -> fillFret.c
strReplace - Replaces base string with replacement string and allows for an offset.

## test -> printString -> printStringFunc.c
printStrings - Prints all notes on fretboard.

## test -> printString -> stringRootIssue.c
Solution to issue of unidentified intervals matching string root.
Now compares by string every fret and iterates through scale array each time to find equivalent.
TODO
Make into a function.
BU and remove from alpha the buggy code.

## test -> pointers -> pointerOffsets.c
Creates all 7 heptatonic modes in pointer array based off of ionian mode.

## alpha -> modules -> modulesAlpha.h
Contains all deployable modules.
neckHeader - displays neck numbers based on fretLength.

# Variables
## modules


`int noteDifference(char tonic[], char compareNote[])`

`char *determineInterval(char tonic[], char compareNote[])`

`void strReplace(char str[], char replace[], int offset)`

`void printStrings(char *noteArray[], char *tuning[], int notesLength, int tuningLength, int fretLength)`

`void printScaleString(char *notesArray[], char tuningRoot[], int *scale[], int scaleLength, int notesLength, int fretLength)`

`void changeIntervals(char *notesArray[], char tuningRoot[], int notesLength)`

`void neckHeader(int fretLength)`

`void drawFretboard(int stringNumber, int neckSize, char *tuning[])`


