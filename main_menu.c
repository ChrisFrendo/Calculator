//
// Created by Chris Frendo, Manwel Bugeja and Domenico Agius on 10/12/2018.
//
#include <stdio.h>
#include <stdlib.h>
#include "calc_library.h"

void createMenu(void);

float getFloat(void);

void getFloatValues(float *value1, float *value2);

int main(void) {
    createMenu();
    return 0;
}

// This method keeps asking the user to choose a function until he enters the exit option 'q'
void createMenu(void) {
    char choice;
    float value2 = 0;
    float ans;

    while (1) {
        printf("Enter '1' to Add\n"
               "Enter '2' to Subtract\n"
               "Enter '3' to Multiply\n"
               "Enter '4' to Divide\n"
               "Enter 'q' to quit\n*********************\n");

        scanf("%c", &choice);

        while (getchar() != '\n');

        switch (choice) {
            case '1':
                getFloatValues(&value1, &value2);
                ans = add(value1, value2);
                printf("%.3f + %.3f = %.3f\n", value1, value2, ans);
                break;
            case '2':
                getFloatValues(&value1, &value2);
                ans = subtract(value1, value2);
                printf("%.3f - %.3f = %.3f\n", value1, value2, ans);
                break;
            case '3':
                getFloatValues(&value1, &value2);
                ans = multiply(value1, value2);
                printf("%.3f * %.3f = %.3f\n", value1, value2, ans);
                break;
            case '4':
                getFloatValues(&value1, &value2);
                ans = divide(value1, value2);
                printf("%.3f / %.3f = %.3f\n", value1, value2, ans);
                break;
            case 'q':
            case 'Q':
                puts("Quitting program now...\n");
                exit(EXIT_SUCCESS);
            default: // Handles all invalid inputs from user
                puts("Please enter a valid option\n");
                break;
        }

    }
}

float getFloat(void) {
    float ans;
    char ch;

    while (scanf("%f", &ans) != 1) {
        // Echo bad input
        while ((ch = getchar()) != '\n') {
            putchar(ch);
        }
        puts(" is not a valid input. The input must be a float.\nInput value: ");
    }
    // Clears buffer on successful input
    while (getchar() != '\n');

    return ans;
}

void getFloatValues(float *value1, float *value2) {
    puts("Input first value: ");
    *value1 = getFloat();

    puts("Input second value: ");
    *value2 = getFloat();
}