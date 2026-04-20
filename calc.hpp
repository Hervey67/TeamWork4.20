#include <iostream>
using namespace std;

int getCalc(int &a, int &b)
{
  int sum = a + b;
  int avg = sum / 2;
  return sum;
}