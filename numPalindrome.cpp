#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size();
        int i = 0;
        while (i <= n/2)
        {
          if (s[i] != s[n-i-1])
          {
            return false;
          }
          
        }
        
        return true;
    }
};

int main()
{
 
 return 0;
}