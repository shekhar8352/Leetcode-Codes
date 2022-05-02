#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool isValid(string s)
  {
    stack<char> solution;
    for (char &c : s)
    {
      switch (c)
      {
      case '(':
        solution.push(c);
        break;
      case '{':
        solution.push(c);
        break;
      case '[':
        solution.push(c);
        break;
      case ')':
        if (solution.empty() || solution.top() != '(')
          return false;
        else
          solution.pop();
        break;
      case '}':
        if (solution.empty() || solution.top() != '{')
          return false;
        else
          solution.pop();
        break;
      case ']':
        if (solution.empty() || solution.top() != '[')
          return false;
        else
          solution.pop();
        break;
      default:;
      }
    }
    return solution.empty();
  }
};

int main()
{

  return 0;
}