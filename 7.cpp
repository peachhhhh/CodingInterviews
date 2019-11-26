#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

//斐波那契数列
int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int a = 1, b = 1;
    int c = 1;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

void test()
{
}

int main()
{
    test();
    return 0;
}