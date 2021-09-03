/*
Author: Ivan Rao
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2B

Prompts user to enter a lower and upper bound. Prints out all the integers
in the range L <= i < U separated by spaces.
*/

#include <iostream>

int main(){
  int L, U;
  std::cout << "Please enter L: ";
  std::cin >> L;
  std::cout << "Please enter U: ";
  std::cin >> U;

  std::cout << std::endl;
  for (int i = L; i < U; i++){
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
