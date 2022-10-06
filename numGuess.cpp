// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program checks if a user can guess the same number as the programs

#include <iomanip>
#include <iostream>

int main() {
    // this function compares the programs chosen number with the users
    const int CORRECT_GUESS = 3;
    int guessedNumber;

    // get the users chosen number between 0 and 9
    std::cout << "Choose a number between 0 and 9: ";
    std::cin >> guessedNumber;

    // check if the user selected the correct number
    if (CORRECT_GUESS == guessedNumber) {
        // If they did, display it to them
        std::cout << "You guessed correctly.";
    }

    // check if the user selected the incorrect number
    if (CORRECT_GUESS != guessedNumber) {
        // If they did, display it to them
        std::cout << "You guessed wrong.";
    }
}
