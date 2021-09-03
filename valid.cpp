/*
Author: Ivan Rao
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2A

Asks the user to enter an integer n. If the integer is within
the range 0 < n < 100, the program will display the integer squared.
Othwerise, it will prompt the user to enter another integer.
*/

#include <iostream>

int main(){
  int n;
  std::cout << "Please enter an integer: ";
  std::cin >> n;

  while (n <= 0 || n >= 100){
      std::cout << "Please re-enter: ";
      std::cin >> n;
  }

  std::cout << std::endl << "Number squared is " << n*n << std::endl;

}
