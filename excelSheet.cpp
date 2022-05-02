#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<string> cellsInRange(string s)
  {
    vector<string> Soln;
    char ColStart = s[0];
    char ColEnd = s[3];
    char RowStart = s[1];
    char RowEnd = s[4];

    for (char col = ColStart; col <= ColEnd; ++col)
    {

      for (char row = RowStart; row <= RowEnd; ++row)
      {

        Soln.push_back(string(1, col) + row);
      }
    }

    return Soln;
  }
};

int main()
{

  return 0;
}