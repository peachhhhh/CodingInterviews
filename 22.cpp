#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL)
    {
    }
};

//从上往下打印二叉树（层次遍历），队列
vector<int> PrintFromTopToBottom(TreeNode *root)
{
    if (!root)
    {
        return {};
    }
    queue<TreeNode *> qq;
    qq.push(root);
    vector<int> res;
    while (!qq.empty())
    {
        TreeNode *t = qq.front();
        if (t)
        {
            res.push_back(t->val);
            qq.push(t->left);
            qq.push(t->right);
        }
        qq.pop();
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
