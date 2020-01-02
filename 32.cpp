#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//把数组排成最小的数
static bool cmp(int &a, int &b)
{
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return stoi(ab) < stoi(ba);
}

string PrintMinNumber(vector<int> n)
{
    string res = "";
    sort(n.begin(), n.end(), cmp);
    for (int i = 0; i < n.size(); i++)
    {
        res += to_string(n[i]);
    }
    return res;
}

void test()
{
}

int main()
{
    test();
    return 0;
}