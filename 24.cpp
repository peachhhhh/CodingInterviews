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
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//二叉树中和为某一值的路径，递归
void dfs(TreeNode *root, int num, vector<int> &path, vector<vector<int>> &res)
{
    if (!root)
    {
        return;
    }
    path.push_back(root->val);
    if (!root->left && !root->right)
    {
        if (num - root->val == 0)
        {
            res.push_back(path);
        }
        path.pop_back();
        return;
    }
    dfs(root->left, num - root->val, path, res);
    dfs(root->right, num - root->val, path, res);
    path.pop_back();
}

vector<vector<int>> FindPath(TreeNode *root, int num)
{
    vector<vector<int>> res;
    vector<int> path;
    dfs(root, num, path, res);
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
