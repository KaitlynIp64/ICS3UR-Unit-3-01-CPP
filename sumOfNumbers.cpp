// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program calculates the area of perimeter of an equilateral triangle
//    with side inputted from the user

#include <cmath>
#include <iostream>

int main() {
    // this function calculates area and perimeter of equilateral triangle
    int numberOne;
    int numberTwo;
    double sum;
    // input
    std::cout << "Enter the first number: ";
    std::cin >> numberOne;
    std::cout << "Enter the second number: ";
    std::cin >> numberTwo;
    // process
    sum = numberOne + numberTwo;
    // output
    std::cout << "" << std::endl;
    std::cout << "The sum is " << sum << "." << std::endl;
    std::cout << "\nDone." << std::endl;
}
