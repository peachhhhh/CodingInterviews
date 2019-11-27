#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

//二进制中1的个数
int NumberOf1(int n)
{
    int res = 0;
    while (n != 0)
    {
        res++;
        n = n & (n - 1);
    }
    return res;
}

void test()
{
    cout << NumberOf1(8) << endl;
}

int main()
{
    test();
    return 0;
}