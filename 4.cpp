#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//重建二叉树，递归的同时对中序遍历二分查找的思想
TreeNode *dfs(vector<int> &pre, vector<int> &vin, int pl, int pr, int il, int ir, unordered_map<int, int> &m)
{
    if (pl > pr || il > ir)
    {
        return NULL;
    }
    TreeNode *node = new TreeNode(pre[pl]);
    int len = m[pre[pl]] - il;
    node->left = dfs(pre, vin, pl + 1, pr + len, il, il + len - 1, m);
    node->right = dfs(pre, vin, pl + len + 1, pr, il + len + 1, ir, m);
    return node;
}

TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin)
{
    unordered_map<int, int> hashmap;
    for (int i = 0; i < vin.size(); ++i)
    {
        hashmap[vin[i]] = i;
    }
    return dfs(pre, vin, 0, pre.size() - 1, 0, vin.size() - 1, hashmap);
}

//迭代，栈
TreeNode *reConstructBinaryTree2(vector<int> pre, vector<int> vin)
{
    if (pre.empty())
    {
        return NULL;
    }
    stack<TreeNode *> s;
    TreeNode *root = new TreeNode(pre[0]);
    s.push(root);
    for (int i = 1, j = 0; i < pre.size(); i++)
    {
        TreeNode *cur = new TreeNode(pre[i]), *tmp = NULL;
        while (!s.empty() && s.top()->val == vin[j])
        {
            tmp = s.top();
            s.pop();
            j++;
        }
        if (tmp)
        {
            tmp->right = cur;
        }
        else
        {
            s.top()->left = cur;
        }
        s.push(cur);
    }
    return root;
}

void test()
{
}

int main()
{
    test();
    return 0;
}