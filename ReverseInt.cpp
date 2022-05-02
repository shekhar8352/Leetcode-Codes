#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int reverse(int x)
  {
    int soln;

    if (x >= 0)
    {
      if (x < 10)
      {
        return x;
      }
      else if (x >= 10 && x < 100)
      {
        int one = x % 10;
        int tens = x / 10;
        soln = (one * 10) + tens;
      }
      else if (x >= 100 && x < 1000)
      {
        int one = x % 10;
        int tens = x / 10;
        tens = tens % 10;
        int hund = x / 100;
        soln = (one * 100) + (tens * 10) + hund;
      }
    } else
    {
      x = (-1)*x;
            if (x < 10)
      {
        return x;
      }
      else if (x >= 10 && x < 100)
      {
        int one = x % 10;
        int tens = x / 10;
        soln = (one * 10) + tens;
      }
      else if (x >= 100 && x < 1000)
      {
        int one = x % 10;
        int tens = x / 10;
        tens = tens % 10;
        int hund = x / 100;
        soln = (one * 100) + (tens * 10) + hund;
      }

      soln = soln*(-1);
    }
    

    // else if (x < 0 && x > -10)
    // {
    //   return x;
    // }
    // else if (x <= -10 && x > -100)
    // {
    //   int one = x % 10;
    //   int tens = x / 10;
    //   soln = (one * 10) + tens;
    // }
    // else if (x <= -100 && x > -1000)
    // {
    //   int one = x % 10;
    //   int tens = x / 10;
    //   tens = tens % 10;
    //   int hund = x / 100;
    //   soln = (one * 100) + (tens * 10) + hund;
    // }

    return soln;
  }
};

int main()
{
  int x;
          int  soln = 0;
        while (x!=0){
            if (soln > INT_MAX/10 || soln < INT_MIN/10){
                return 0;
            }
            soln = soln*10+ x%10;
            x= x/10;
        }
        return soln;
  return 0;
}