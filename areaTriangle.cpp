// Copyright (C) Chanella All rights reserved
// Created by Chanella
// Created on : May 6 2025
// This program calculates the area of a triangle

#include <iostream>
#include <string>

void calculateArea(float base, float height) {
    // calculate area of a triangle
    float area;

    area = (base * height) / 2;

    // print the output
    std::cout << "The area of the triangle is :" << area << "cm^2" << std::endl;
}

int main() {
    std::string userBaseAString;  // variable to store the base
    std::string userHeightAString;  // variable to store the height
    float user_base;
    float user_height;

    try {
        // input the base and the height of the triangle
        std::cout << "Enter the base of the triangle (cm): ";
        std::cin >> userHeightAString;                                 // ask the user to enter base
        std::cout << "Enter the height of the triangle (cm): ";  // ask the user to enter the height
        std::cin >> userBaseAString;  // read the base from the user
        user_base = std::stof(userBaseAString);  // convert teh base to float
        std::cin >> userHeightAString;  // read height from the user
        user_height = std::stof(userHeightAString);

        if (user_base <=0) {  //  check if the base is less than or equal to 0
            // the program will ask the usr to enter a positive number
            std::cout << "Please enter a positive number for the base." << std::endl;
        }
        else if (user_height <=0) {  // check if the height is less than or equal to 0
            // the program will ask the user to enter a positive number
            std::cout << "Please enter a positive number for the height." << std::endl;
        }
        else {
            calculateArea(user_base, user_height);  // call the function to calculate the area
        }
    }
    catch (std::invalid_argument) {
        std::cout << "please enter a valid number." << std::endl;
    }
}