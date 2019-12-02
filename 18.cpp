#include <iostream>
#include <vector>
#include <algorithm>
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

//二叉树的镜像
void Mirror(TreeNode *root)
{
    if (!root)
    {
        return;
    }
    TreeNode *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    Mirror(root->left);
    Mirror(root->right);
}

void test()
{
}

int main()
{
    test();
    return 0;
}
