#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

//包含min函数的栈
stack<pair<int, int>> ss;

void push(int value)
{
    if (ss.empty() || value < ss.top().second)
    {
        ss.push(make_pair(value, value));
    }
    else
    {
        ss.push(make_pair(value, ss.top().second));
    }
}

void pop()
{
    ss.pop();
}

int top()
{
    return ss.top().first;
}

int min()
{
    return ss.top().second;
}

void test()
{
}

int main()
{
    test();
    return 0;
}
