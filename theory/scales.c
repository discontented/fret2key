/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>

int scales(void) {
    char *notes[] = {
        "C",
        "C#",
        "D",
        "D#",
        "E",
        "F",
        "F#",
        "G",
        "G#",
        "A",
        "A#",
        "B"
    };

    int notesLength = sizeof(notes) / sizeof(notes[0]);

    char root = "A";

    void calcFret(char rootNote) {
        size_t i;
        int notePosition;
        for (i = 0; i < notesLength; i++) {
            if(strcmp(rootNote, notes[i]) == 0) {
                notePosition = i;
            } else {
                printf("Does not match %d\n", i);
            }
        }
    }

    calcFret(root);


}
