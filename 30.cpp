#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

//连续子数组的最大和
int FindGreatestSumOfSubArray(vector<int> num)
{
    int n = num.size(), cursum = 0, maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (cursum < 0)
        {
            cursum = num[i];
        }
        else
        {
            cursum += num[i];
        }
        maxsum = max(maxsum, cursum);
    }
    return maxsum;
}

void test()
{
}

int main()
{
    test();
    return 0;
}