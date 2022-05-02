#include <bits/stdc++.h>
using namespace std;

void romanNum()
{
  string s;
  cin >> s;
  int n = s.length();
  int num = 0;
  for (int i = 0; i < n; i++)
  {
    if (s.at(i) == 'I')  {
      num += 1;
    }
    else if (s.at(i) == 'V')
    {
      num += 5;
    }
    else if (s.at(i) == 'X')
    {
      num += 10;
    }
    else if (s.at(i) == 'L')
    {
      num += 50;
    }
    else if (s.at(i) == 'C')
    {
      num += 100;
    }
    else if (s.at(i) == 'D')
    {
      num += 500;
    }
    else if (s.at(i) == 'M')
    {
      num += 1000;
    }
  }

  for (int i = 1; i < n; i++)
  {
    if ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I')
    {
      num -= 1 + 1;
    }

    if ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X')
    {
      num -= 10 + 10;
    }

    if ((s[i] == 'D' || s[i] == 'M') && s[i - 1] == 'C')
    {
      num -= 100 + 100;
    }
  }

  cout << num;
}

int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    romanNum();
    cout << endl;
  }

  return 0;
}