/*
PSEUDOCODE:
FindNthRoot function
  Initializes the int "temp"
  Loops into teh set number
    Loops to set temp
      Returns the precision of the value

*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string FindNthRoot(int number, int n, int precision) {
  int temp;
  
  for (int j = 2; j <= number; j++)  {
    temp = 1;
    for (int k = 1; k <= n; k++)  {
      temp *= j;
      if (temp == number)  {
        setprecision(precision) << i;
        return i;
      }
    }
  }
  setprecision(precision) << temp;

  return temp;
}
