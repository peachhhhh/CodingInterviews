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

bool isEqual(TreeNode *t1, TreeNode *t2)
{
    if (!t2)
    {
        return true;
    }
    if (t1 && t2 && t1->val == t2->val)
    {
        return isEqual(t1->left, t2->left) && isEqual(t1->right, t2->right);
    }
    return false;
}

//树的子结构
bool HasSubtree(TreeNode *t1, TreeNode *t2)
{
    if (!t1 || !t2)
    {
        return false;
    }
    if (isEqual(t1, t2))
    {
        return true;
    }
    return isEqual(t1, t2) || HasSubtree(t1->left, t2) || HasSubtree(t1->right, t2);
}

void test()
{
}

int main()
{
    test();
    return 0;
}
