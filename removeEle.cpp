#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int rslt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != val)
      {
        nums[rslt++] = nums[i];
      } 
    }

    return rslt;
  }
};

int main()
{

  return 0;
}