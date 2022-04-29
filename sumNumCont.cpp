// Copyright (c) 2022 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created in: April. 27. 2022
// In this program we ask user for numbers and then
// calculate the sum numbers using loop


#include <iostream>

int main() {
       while (true) {
              // Declaring variables
              int counter = 0;
              int totalSum = 0;
              int userInputAsInt;
              int userNumAsInt;
              std::string userInput;
              std::string userNum;


              // Ask user how much number they want to add up
              std::cout << "How many numbers want to enter?: ";
              std::cin >> userInput;

              // Casting to int
              try {
                     userInputAsInt = std::stoi(userInput);

                     if (userNumAsInt <= 0) {
                            std::cout <<
                            "Invalid number. Input cannot be 0 or less ";

                            break;
                     } else {
                     while (counter < userInputAsInt) {
                            // input
                            std::cout << "Enter a number : ";
                            std::cin >> userNum;
                            // Casting to int
                            try {
                                   userNumAsInt = std::stoi(userNum);
                                   if (userNumAsInt <= 0) {
                                       std::cout <<
                                "Invalid number. input cannot be 0 or less." << std::endl;

                                          continue;
                                   }
                                   totalSum += userNumAsInt;
                                   counter += 1;
                            } catch (std::invalid_argument) {
                                   // The user did not enter a number
                                   std::cout <<"Invalid input. Enter a number."<< std::endl;
                                   continue;
                     }
                     }
              }
              // Displaying the total sum
              std::cout << "The total sum is " << totalSum << ".\n";
              break;
              } catch (std::invalid_argument) {
                     // The user did not enter a number
                     std::cout << "Invalid number. Enter a number.";
                     break;
              }
       }
}
