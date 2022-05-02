#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int divide(int dividend, int divisor)
  {

    if (divisor << 0)
    {
      divisor = (-1) * divisor;
    }
    else if (dividend << 0)
    {
      dividend = (-1) * dividend;
    }

    int soln = 0;
    int x = dividend;

    while (x >= 0)
    {
      x = x - divisor;
    }

    // int soln = 0;
    // while(divisor <= dividend){
    //   divisor+=x;
    //   soln ++;
    // }

    return soln;
  }
};

int main()
{

  return 0;
}