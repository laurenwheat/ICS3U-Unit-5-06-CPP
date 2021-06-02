// Copyright (c) 2021 Lauren Wheatley All rights reserved.
//
// Created by: Lauren Wheatley
// Created on: May 2021
// This program adds numbers

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

void decimalRounded(float &userFloat, float decimal) {
    userFloat = userFloat * pow(10, decimal) + 0.5;
    userFloat = static_cast<int>(userFloat);
    userFloat = userFloat / pow(10, decimal);
}

int main() {
    std::string userInput;
    float userNum;
    std::string decimalpcInput;
    float decimalpcInt;

    while (true) {
        try {
            std::cout << "Enter your number: ";
            std::cin >> userInput;
            userNum = std::stof(userInput);
            std::cout << "Enter how many places to round by: ";
            std::cin >> decimalpcInput;
            decimalpcInt = std::stof(decimalpcInput);
            std::cout << "" << std::endl;

            decimalRounded(userNum, decimalpcInt);

            break;
        } catch (std::invalid_argument) {
            std::cout << "That is not a valid input!!!" << std::endl;
        }
    }

    std::cout << userInput << " is rounded " << decimalpcInt << " places to "
              << userNum << std::endl;
}
