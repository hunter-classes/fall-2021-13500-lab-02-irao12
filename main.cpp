/*
Author: Ivan Rao
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2B
*/

#include <iostream>
#include "funcs.h"

int main(){

  std::cout << "Test#1: L = -5, U = 10" << std::endl;
  print_interval(-5, 10);
  std::cout << std::endl;

  std::cout << "Test#2: L = 6, U = 25" << std::endl;
  print_interval(6, 25);
  std::cout << std::endl;

  std::cout << "Test#3: L = -30, U = -16" << std::endl;
  print_interval(-30, -16);
  std::cout << std::endl;

  std::cout << "Test#4: L = 0, U = 20" << std::endl;
  print_interval(0, 20);
  std::cout << std::endl;



  return 0;
}
