/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   intervals.c
 * Author: jcorn
 *
 * Created on July 17, 2017, 1:04 AM
 */

// #include "intervals.h"
#include <stdio.h>
#include "../core/notes/notes.h"

int octave = sizeof(notes);

int tone = 2;

int semitone = 1;

char note;

int elementToId(string, array) {
    int arraySize = sizeof(array) / sizeof(array[0]);

    size_t i;
    for (i = 0; i < arraySize; i++) {
        if(strcmp(string, array[i]) == 0) {
            return i;
        }
    }
}

int minorSecond(note) {
    return (note + semitone);
}

int main(void) {
    printf("Root: ");
    scanf("%1s", &note);
}
