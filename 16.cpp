#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//合并两个排序的链表，非递归
ListNode *Merge(ListNode *pHead1, ListNode *pHead2)
{
    if (!pHead1)
    {
        return pHead2;
    }
    if (!pHead2)
    {
        return pHead1;
    }
    ListNode *head = new ListNode(0);
    ListNode *tmp = head;
    while (pHead1 && pHead2)
    {
        if (pHead1->val > pHead2->val)
        {
            tmp->next = pHead2;
            pHead2 = pHead2->next;
            tmp = tmp->next;
        }
        else
        {
            tmp->next = pHead1;
            pHead1 = pHead1->next;
            tmp = tmp->next;
        }
    }
    if (pHead1)
    {
        tmp->next = pHead1;
    }
    if (pHead2)
    {
        tmp->next = pHead2;
    }
    return head->next;
}

//递归，棒！
ListNode *Merge(ListNode *pHead1, ListNode *pHead2)
{
    if (!pHead1)
    {
        return pHead2;
    }
    if (!pHead2)
    {
        return pHead1;
    }
    if (pHead1->val > pHead2->val)
    {
        pHead2->next = Merge(pHead1, pHead2->next);
        return pHead2;
    }
    else
    {
        pHead1->next = Merge(pHead1->next, pHead2);
        return pHead1;
    }
}

void test()
{
}

int main()
{
    test();
    return 0;
}
