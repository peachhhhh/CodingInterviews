#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//替换空格，从后往前，双指针，遇到空格右指针移动3格，否则1格，移动的同时赋值
void replaceSpace(char *str, int length)
{
    int newLength = length;
    for (int i = 0; i < length; ++i)
    {
        if (*(str + i) == ' ')
        {
            newLength += 2;
        }
    }
    int p1 = length - 1, p2 = newLength - 1;
    while (p1 >= 0)
    {
        if (*(str + p1) == ' ')
        {
            *(str + p2 - 2) = '%';
            *(str + p2 - 1) = '2';
            *(str + p2) = '0';
            p2 -= 2;
        }
        else
        {
            *(str + p2) = *(str + p1);
        }
        p1--;
        p2--;
    }
}

void test()
{
    char a[3] = {'a', ' ', 'b'};
    replaceSpace(a, 3);
}

int main()
{
    test();
    return 0;
}
