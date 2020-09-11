#include <iostream>
//#include "search.h"
#include "dictionary.h"

using namespace std;

int main() {
  /*int numbers[] = {1,2,4,5,6,7,8,9};
  int length = 8;
  int n = 3;
  
  std::cout << "Linear Search: " << LinearSearch(numbers,length,n) <<  std::endl;

  std::cout << "Binar Search: " << BinarySearch(numbers,length,n) <<  std::endl;*/
  string words[] = {"Ana", "Baptiste", "Brigitte", "Lucio", "Mercy", "Moira", "Zenyatta"};

  int length = sizeof(heroes);

  for (int i = 0; i < length; i++)  {
    cout << heroes[i] << " " << endl;
  }
}