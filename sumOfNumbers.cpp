// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program calculates the area of perimeter of an equilateral triangle
//    with side inputted from the user

#include <iomanip>
#include <iostream>

int main() {
    // this function calculates the sum of two numbers
    float num1;
    float num2;
    float sumOfNum;

    // input
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // process
    sumOfNum = num1 + num2;

    // output
    std::cout << "" << std::endl;
    std::cout << num1 << "+" << num2 << "=" << sumOfNum << std::endl;
}
