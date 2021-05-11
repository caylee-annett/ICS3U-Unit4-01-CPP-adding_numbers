// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program adds integers from 1 to the user's input and uses loops

#include <iostream>
#include <string>

int main() {
    // This function adds the numbers
    std::string numberAsString;
    float numberAsInteger;
    int loopCounter = 0;

    // Input
    std::cout << "This program adds numbers from 1 to what you enter."
        << std::endl;
    std::cout << "Enter a positive integer: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // Process & Output
    try {
        numberAsInteger = std::stoi(numberAsString);

        while (loopCounter < (numberAsInteger / 2) * (numberAsInteger + 1)) {
            loopCounter = loopCounter + 1;
        }
        std::cout << "The sum of all integers from 1 to " << numberAsInteger
                << " is " << loopCounter << "." << std::endl;
    } catch (std::invalid_argument) {
            std::cout << numberAsString << " is not a valid input." <<std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
