#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

//数值的整数次方，快速幂，时间复杂度O(logn)
double Power(double base, int exponent)
{
    double res = 1;
    int n = abs(exponent);
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            res *= base;
        }
        base *= base;
        n >>= 1;
    }
    return exponent >= 0 ? res : 1 / res;
}

void test()
{
}

int main()
{
    test();
    return 0;
}