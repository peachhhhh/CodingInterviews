#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

//变态跳台阶
int jumpFloorII(int number)
{
    //return 1 << --number;
    vector<int> dp(number + 1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= number; i++)
    {
        dp[i] = 0;
        for (int j = 0; j < i; j++)
        {
            dp[i] += dp[j];
        }
    }
    return dp[number];
}

void test()
{
}

int main()
{
    test();
    return 0;
}