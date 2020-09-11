/*
PSEUDOCODE:
LinearSearch function
  Initialize ints "index, position" to 0
  Initialize bool to false
  Loops until value is found
    Returns value if found, returns -1 if not

BinarySearch function
  Initialize ints "first, last, middle, position" to   0
  Loops until unit is found
    Finds middle value
    Checks if value is above or below middle
      Moves middle accordingly
    Returns value if found, returns -1 if not
*/
#include <iostream>
#include "search.h"

int LinearSearch(int numbers[], int length, int n) {

    int index = 0;
    int position = -1;
    bool found = false;

    while (index < length && !found)  {
      if (numbers[index] == n)  {
        found = true;
        position = index;
      }
      index++;
    }

  return position;
}

int BinarySearch(int numbers[], int length, int n) {

    int first = 0;
    int last = length - 1;
    int middle;
    int position = -1;
    bool found = false;

    while (!found && first <= last)  {
      middle = (first + last) / 2;
      if (numbers[middle] == n)  {
        found = true;
        position = middle;
      }
      else if (numbers[middle] > n)  {
        last = middle - 1;
      }
      else  {
        first = middle + 1;
      }
    }
  return position;
}
