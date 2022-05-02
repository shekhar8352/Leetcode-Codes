#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int removeDuplicates(vector<int>& nums)
  {
    int rslt = -1;
    for (const auto &num : nums)
    {
      if (rslt == -1 || nums[rslt] != num)
      {
        nums[++rslt] = num;
      }
    }
    return rslt + 1;
  }
};

int main()
{

  return 0;
}