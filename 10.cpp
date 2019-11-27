#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

//矩形覆盖，类似跳台阶
int rectCover(int number)
{
    vector<int> dp(number + 1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= number; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
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