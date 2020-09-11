/*
PSEUDOCODE:
MinWordLength function
  Initializes ints "count, min_counter"
  Loop to search through the array
    sets count to the size of array
    sets min_counter to the lowest count
  returns the lowest value

MaxWordLength function
  Initializes ints "count, max_counter"
  Loop to search through the array
    sets count to the size of the array
    sets max_counter to the highest count
  Returns the highest value

WordLengthRange function
  Initializes ints "count, max_counter, min_counter,   range"
  Loop to search through the array
    Sets max_counter to new count if above
    Sets min_counter to new count if below
  Sets range to max_counter - min_counter
  Returns range

AverageWordLength function
  Initializes ints "array_length, count, sum, avg"
  Loop to search through the array
    Sets count to the size of the array
    Sets sum to equal itself + count
  Sets avg to the sum / length
  Returns avg

MostCommonWordLength function
  Initializes ints "count, length_counter, common"
  Loop to search through the array
  Loop to find the most common word length
  Returns common
    
*/
#include <iostream>
#include <string>
#include "dictionary.h"

using namespace std;

int MinWordLength(std::string words[], int length) {
  int count = 0;
  int min_counter = count;

  for (int m = 0; m < length; m++)  {
    count = sizeof(words[m]);
    if (count <= min_counter)  {
      min_counter = count;
    }
  }
  return min_counter;
}

int MaxWordLength(std::string words[], int length) {
  int count;
  int max_counter = count;

  for (int e = 0; e < length; e++)  {
    count = sizeof(words[e]);
    if (count >= max_counter)  {
      max_counter = count;
    }
  }
  return max_counter;
}

int WordLengthRange(std::string words[], int length) {
  int count = 0;
  int min_counter = 0;
  int max_counter = 0;
  int range;

  for(int r = 0; r < length; r++)  {
    count = sizeof(words[r]);
    if (count >= max_counter)  {
      max_counter = count;
    }
    else  {
      if (count <= min_counter)  {
        min_counter = count;
      }
    }
  }
  range = max_counter - min_counter;
  return range;
}

int AverageWordLength(std::string words[], int length) {
  int array_length = length;
  int count = 0;
  int sum = count;
  int avg;

  for (int c = 0; c < length; c++)  {
    count = sizeof(words[c]);
    sum = sum + count;
  }
  avg = sum / length;
  return avg;
}

int MostCommonWordLength(std::string words[], int length){
  int count = 0;
  int length_counter = 0;
  int common = 0;

  for (int y = 0; y < length; y++)  {
    length_counter = sizeof(words[y]);
    for (int x = 0; x < length; x++)  {
      if (sizeof(words[y]) == sizeof(words[x]))  {
        count++;
        if (count > 1)  {
          common = length_counter;
        }
      }
    }
  }
  return common;
}
