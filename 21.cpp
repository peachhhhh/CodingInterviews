#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

//栈的压入、弹出序列
bool IsPopOrder(vector<int> p, vector<int> pp)
{
    if (p.empty())
    {
        return 0;
    }
    stack<int> ss;
    ss.push(p[0]);
    int i = 0, j = 0;
    while (j < pp.size())
    {
        while (ss.top() != pp[j])
        {
            if (i == p.size())
            {
                return 0;
            }
            ss.push(p[i]);
            i++;
        }
        ss.pop();
        j++;
    }
    return 1;
}

void test()
{
}

int main()
{
    test();
    return 0;
}
