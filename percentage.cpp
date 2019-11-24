// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on November 2019
// This program gives the percentage of levels

#include <iostream>


int percentage(std::string level_str) {
    // This function converts the level into percentage
    int percent_of_level;
    // Process
    if (level_str == "4+") {
        percent_of_level = 98;
    } else if (level_str == "4") {
        percent_of_level = 90;
    } else if (level_str == "4-") {
        percent_of_level = 83;
    } else if (level_str == "3+") {
        percent_of_level = 78;
    } else if (level_str == "3") {
        percent_of_level = 75;
    } else if (level_str == "3-") {
        percent_of_level = 71;
    } else if (level_str == "2+") {
        percent_of_level = 68;
    } else if (level_str == "2") {
        percent_of_level = 65;
    } else if (level_str == "2-") {
        percent_of_level = 61;
    } else if (level_str == "1+") {
        percent_of_level = 58;
    } else if (level_str == "1") {
        percent_of_level = 55;
    } else if (level_str == "1-") {
        percent_of_level = 51;
    } else if (level_str == "0+") {
        percent_of_level = 45;
    } else if (level_str == "0") {
        percent_of_level = 35;
    } else if (level_str == "0-") {
        percent_of_level = 15;
    } else {
        percent_of_level = -1;
    }
    return percent_of_level;
}


main() {
    // This function gets the input and calls another function
    std::string level;
    int percent;

    // Input
    std::cout << "Please enter your level example(4+): ";
    std::cin >> level;

    // pass it to the other function
    percent = percentage(level);

    // Output
    if (percent == -1) {
        std::cout << "Invalid input!!!" << std::endl;
    } else {
        std::cout << "Your grade is " << percent << std::endl;
    }
}
