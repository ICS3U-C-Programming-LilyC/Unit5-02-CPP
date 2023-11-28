// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/21/2023
// This program will calculate the area of a triangle.
// Allowing for input & ouput in my program
// Allowing for math operators to be used.
#include<iostream>
#include<cmath>
#include<iomanip>

void CalcArea(float base, float height) {
    // Calculations for area.
    float area = (base * height) / 2;

    // Displaying area to the user.
    // Rounding the area to 2 decimal places.
    std::cout << "The area is " << std::fixed
    << std::setprecision(2) << area << " cm^2.\n";
}

int main() {
    // Explaining my program to the user.
    std::cout <<
    "This program will calculate the area of a triangle.\n";

    // Declaring variables.
    std::string base_from_user;
    std::string height_from_user;

    // Getting user input.
    std::cout << "Enter a base for your triangle as a decimal in cm: ";
    std::cin >> base_from_user;
    std::cout << "Enter a height for your triangle as a decimal in cm: ";
    std::cin >> height_from_user;

    // Using a try catch to catch any erroneous inputs.
    try {
        // Converting base and height input into a decimal.
        float baseAsFloat = std::stof(base_from_user);
        float heightAsFloat = std::stof(height_from_user);

        // If statement to not allow negatives.
        if (baseAsFloat < 0 || heightAsFloat < 0) {
            std::cout << "Please enter a positive number.";
            // Else calling CalcArea function.
        } else {
            // Calling CalcArea function.
            CalcArea(baseAsFloat, heightAsFloat);
        }
    // Catching any errors.
    } catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
