#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//整数中1出现的次数
int NumberOf1Between1AndN_Solution(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i *= 10)
    {
        int a = n / i;
        int b = n - a * i;
        if (a % 10 == 0)
        {
            count += a / 10 * i;
        }
        else if (a % 10 == 1)
        {
            count += a / 10 * i + b + 1;
        }
        else
        {
            count += (a / 10 + 1) * i;
        }
    }
    return count;
}

void test()
{
}

int main()
{
    test();
    return 0;
}