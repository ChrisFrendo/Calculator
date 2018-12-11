//
// Created by Chris Frendo, Manwel Bugeja and Domenico Agius on 10/12/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include "calc_library.h"


void createMenu(void);

int main(void){
    createMenu();
    return 0;
}

// This method keeps asking the user to choose a function until he enters the exit option 'q'
void createMenu(void) {
    char choice;
    while (1) {
        printf("Enter '1' to Add\n"
               "Enter '2' to Subtract\n"
               "Enter '3' to Multiply\n"
               "Enter '4' to Divide\n"
               "Enter 'q' to quit\n*********************\n");

        scanf("%c", &choice);

        while(getchar() != '\n');

        switch (choice) {
            case '1':
                // Call add method here
                break;
            case '2':
                // Call subtract method here
                break;
            case '3':
                // Call multiply method here
                break;
            case '4':
                // Call divide method here
                break;
            case 'q':
                puts("Quitting program now...\n");
                exit(0);
            default: // Handles all invalid inputs from user
                puts("Please enter a valid option\n");
                break;
        }

    }
}