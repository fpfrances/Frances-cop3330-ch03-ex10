/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Filipe Frances
 */
#include <iostream>
#include "Header.h"

int main(){
    std::cout << "Please choose an operation: +,-,*,/, plus, minus, mul or div.\n";
    std::cin >> operation;
    std::cout << "Please enter two integers (they can be decimals): \n";
    std::cin >> val1 >> val2;
    std::cout << "You entered: " << operation << " " << val1 << " " << val2 << std::endl;

    if (operation == "+" || operation == "plus")
        std::cout << "You want to add " << val1 << " to " << val2 << " which is " << val1 + val2 << "." << std::endl;
    else if (operation == "-" || operation == "minus")
        std::cout << "You want to minus " << val1 << " from " << val2 << " which is " << val1 - val2 << "." << std::endl;
    else if (operation == "*" || operation == "mul")
        std::cout << "You want to multiply " << val1 << " and " << val2 << " which is " << val1 * val2 << "." << std::endl;
    else if (operation == "/" || operation == "div")
        std::cout << "You want to divide " << val1 << " by " << val2 << " which is " << val1 / val2 << "." << std::endl;
    else std::cout << "Sorry, that operation is not valid.\n";
    system("pause>0");
}