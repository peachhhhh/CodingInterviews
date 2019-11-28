#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//链表中倒数第k个结点，双指针
ListNode *FindKthToTail(ListNode *pListHead, unsigned int k)
{
    ListNode *p1, *p2;
    p1 = pListHead;
    p2 = pListHead;
    for (int i = 0; i < k; i++)
    {
        if (!p2)
        {
            return nullptr;
        }
        p2 = p2->next;
    }
    while (p2)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1;
}

void test()
{
}

int main()
{
    test();
    return 0;
}