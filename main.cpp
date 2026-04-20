#include <iostream>
#include "input.hpp"
#include "output.hpp"
#include "calc.hpp"
using namespace std;

int main()
{
  int n1 = 0, n2 = 0;
  int sum, avg;

  getInput(n1, n2);
  sum = getCalc(n1, n2);
  getOutput(sum, avg);

 // #opinion...
  return 0;
}