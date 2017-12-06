# fret2key
A command-line tool that draws a guitar fretboard and displays note positions on frets.

## How to Use
The main menu gives 5 options:
1. Display Fretboard - Displays all notes on fretboard, regardless of current key.  Will display up to number of frets inputted.  The default fretboard length is 21.
2. Change Number of Frets - Input number of frets on your guitar.
3. Set Key - Input the root key of scales.
4. Display Scales - Choose which of seven diatonic scales to display.  Each scale's root is the note inputed under the Set Key option.
E - Exits the program.

## Limitations
- Only displays naturals and sharps.  Scales including flats will not be theoretically accurate.
- Cannot interpret flats as input for the key or anything beyond a single sharp.
- Limited to 6 string instruments.
- Limited to standard tuning - EADGBE
