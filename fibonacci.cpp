/*
Author: Ivan Rao
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 2D

As the numbers approach two billion, the numbers start diverging because
they are too large to be stored as ints. An int can only store
4 bytes of data so when the number exceeds the limit, it starts to wrap
and switch back and forth between negative and positive values.
*/

#include <iostream>

int main(){
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i < 60; i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
  for (int i = 0; i < 60; i++){
    std::cout << fib[i] << std::endl;
  }

  return 0;
}
