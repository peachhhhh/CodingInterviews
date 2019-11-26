#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

//旋转数组的最小数字，二分查找，升级题，leetcode的33题
int minNumberInRotateArray(vector<int> v)
{
    if (v.empty())
    {
        return 0;
    }
    int l = 0, r = v.size() - 1;
    int mid = (l + r) / 2;
    while (l < r - 1)
    {
        if (v[mid] >= v[l])
        {
            l = mid;
        }
        else if (v[mid] <= v[r])
        {
            r = mid;
        }
        mid = (l + r) / 2;
    }
    return min(v[l], v[r]);
}

void test()
{
}

int main()
{
    test();
    return 0;
}