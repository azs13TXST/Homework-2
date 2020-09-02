#include <iostream>
#include "search.h"

int main() {
  int list[] = {1,2,4,5,6,7,8,9};
  int array_length = 8;
  int number = 3;
  
  std::cout << "Linear Search: " << LinearSearch(list,array_length,number) <<  std::endl;

  std::cout << "Binar Search: " << BinarySearch(list,array_length,number) <<  std::endl;
}