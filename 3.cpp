#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

//从尾到头打印链表
vector<int> printListFromTailToHead(ListNode *head)
{
    stack<int> ss;
    vector<int> res;
    while(head)
    {
        ss.push(head->val);
        head = head->next;
    }
    while(ss.empty())
    {
        res.push_back(ss.top());
        ss.pop();
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
