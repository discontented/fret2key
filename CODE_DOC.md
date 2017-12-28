## menu -> welcome.c
Contains welcome function which will display logo of project.

## menu -> menu.c
Contains all menu options as well as function for display and input.

## theory -> chordsOld.c
Contains main function
Creates chords through intervals

## theory -> chords.c
Attempts to make program more abstract by defining variables as constants.
Creates chords through variables which contain intervals from root.

## main.c
Since certain variables of variables have to be declared locally, all variables should be declared here.

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

# Functions
`int numericPositionRoot(char *root); - notePosition.c ADDED TO modules.c`

`void drawFretboard(int stringNumber, int neckSize, char *tuning[]); - draw.c`

`int convertNoteInt(char *noteArray[], char stringNote[], int arrayLength); - newModules.c`

`char *convertNoteStr(char *noteArray[], int noteInt, int arrayLength); - newModules.c`

`int calcNoteInt(char *noteArray[], int baseNote, int addNote, int arrayLength); - newModules.c`

`char *calcNoteStr(char *noteArray[], char baseString[], char addString[], int arrayLength); - newModules.c`

`char *calcNote(char *noteArray[], char baseString[], int addInt, int arrayLength); - newModules.c`

`int noteDifference(char tonic[], char compareNote[]); - determineInterval.c`

`char *determineInterval(char tonic[], char compareNote[]); - determineInterval.c`

`void strReplace(char str[], char replace[], int offset) - fillFret.c`

`void printStrings(char *noteArray[], char *tuning[], int notesLength, int tuningLength, int fretLength); - printStringFunc`

`void neckHeader(int fretLength); - modulesAlpha.c`

`int modMath(int base); - printIntervalsFunc.c`

`void printScaleString(char *notesArray[], char tuningRoot[], int *scale[], int scaleLength, int notesLength, int fretLength) - printIntervalsFunc.c`

`void changeIntervals(char *notesArray[], char tuningRoot[], int notesLength); - printIntervalsFunc.c`

`int *ptrArrayOffset(int *srcArray[], int *targetArray[], int arrayLength, size_t offset);`
