// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program calculates the circumference of a circle
//    with radius inputted by the user and tau

#include <iostream>

int main() {
    // this function calculates the area and perimeter inputted by user
    const double TAU = 6.28;
    double circumference;
    int radius;

    // input
    std::cout << "Enter radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = radius*TAU;

    // output
    std::cout << "" << std:: endl;
    std::cout << "Circumference is "<< circumference << "mm." << std::endl;
    std::cout<< "\nDone." << std::endl;
}
