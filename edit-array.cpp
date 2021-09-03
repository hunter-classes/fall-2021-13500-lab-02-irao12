/*
Author: Ivan Rao
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2C
*/

#include <iostream>

int main(){
  int myData[10];

  for (int i = 0; i < 10; i++){
    myData[i] = 1;
  }

  std::cout << std::endl;
  int index, value;
  do{
    for (int i = 0; i < 10 ; i++){
      std::cout << myData[i] << " ";
    }
    std::cout << std::endl << std::endl << "Input index: ";
    std::cin >> index;
    std::cout << "Input value: ";
    std::cin >> value;
    if (index<10 && index >= 0){
      myData[index]=value;
    }
    std::cout << std::endl;
  } while (index<10 && index>=0);

  std::cout << "Index out of range. Exit." << std::endl;

  return 0;
}
