#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct RandomListNode
{
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(NULL), random(NULL)
    {
    }
};

//复杂链表的复制，双指针，在原链表上，每个节点后插入其拷贝，然后遍历更新这些拷贝节点内的随机指针，然后拆分链表
RandomListNode *Clone(RandomListNode *pHead)
{
    if (!pHead)
    {
        return NULL;
    }
    RandomListNode *cur = pHead;
    while (cur)
    {
        RandomListNode *tmp = new RandomListNode(cur->label);
        tmp->next = cur->next;
        cur->next = tmp;
        cur = cur->next->next;
    }
    cur = pHead;
    while (cur)
    {
        if (cur->random)
        {
            cur->next->random = cur->random->next;
        }
        cur = cur->next->next;
    }
    cur = pHead;
    RandomListNode *root = cur->next;
    RandomListNode *tmp = new RandomListNode(0);
    while (cur)
    {
        tmp->next = cur->next;
        tmp = tmp->next;
        cur->next = cur->next->next;
        cur = cur->next;
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
