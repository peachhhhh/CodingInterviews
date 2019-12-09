#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <limits.h>
using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//二叉搜索树的后序遍历序列，栈
bool VerifySquenceOfBST(vector<int> v)
{
    if (v.empty())
    {
        return 0;
    }
    stack<int> ss;
    int n = v.size();
    ss.push(v[n - 1]);
    int mark = INT_MAX;
    for (int i = n - 2; i >= 0; i--)
    {
        while (!ss.empty() && v[i] < ss.top())
        {
            mark = ss.top();
            ss.pop();
        }
        if (v[i] > mark)
        {
            return 0;
        }
        ss.push(v[i]);
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
