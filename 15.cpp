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

//反转链表
ListNode *ReverseList(ListNode *head)
{
    if (!head)
    {
        return head;
    }
    ListNode *curHead, *root;
    curHead = head->next;
    root = head;
    root->next = NULL;
    while (curHead)
    {
        ListNode *tmp = curHead->next;
        curHead->next = root;
        root = curHead;
        curHead = tmp;
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
