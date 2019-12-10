#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//pre的递归顺序为二叉搜索树的中序遍历
void dfs(TreeNode *root, TreeNode *&pre)
{
    if (!root)
    {
        return;
    }
    dfs(root->left, pre); //返回时，pre为root的左子树的最右节点
    root->left = pre;
    if (pre)
    {
        pre->right = root; //将pre和root建立连接
    }
    pre = root; //更新pre到当前节点root
    dfs(root->right, pre); //返回时，pre为root的右子树的最右节点
}

//二叉搜索树与双向链表
TreeNode *Convert(TreeNode *root)
{
    if (!root)
    {
        return root;
    }
    TreeNode *pre = nullptr;
    dfs(root, pre);
    while (root->left)
    {
        root = root->left;
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
