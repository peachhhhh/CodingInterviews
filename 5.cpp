#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

stack<int> stack1;
stack<int> stack2;

//用两个栈实现队列
void push(int node)
{
    stack1.push(node);
}

int pop()
{
    if (stack2.empty()) //如果stack2空了，就把stack1全部倒过去，否则不用倒
    {
        while (!stack1.empty())
        {
            stack2.push(stack1.top());
            stack1.pop();
        }
    }
    int res = stack2.top();
    stack2.pop();
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