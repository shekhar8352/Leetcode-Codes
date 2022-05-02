#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:


  int lengthOfLongestSubstring(string s)
  {
     int length = 0; 
     int n = s.size();
 
    for (int i = 0; i < n; i++) {
         

        vector<bool> visited(256);  
 
        for (int j = i; j < n; j++) {

            if (visited[s[j]] == true)
                break;

            else {
                length = max(length, j - i + 1);
                visited[s[j]] = true;
            }
        }
 
        visited[s[i]] = false;
    }
    return length;

  }
};

int main()
{

  return 0;
}
