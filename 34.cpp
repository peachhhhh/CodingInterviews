#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//第一个只出现一次的字符
int FirstNotRepeatingChar(string str)
{
    vector<int> m(123, 0);
    vector<int> res(123, -1);
    for (int i = 0; i < str.size(); i++)
    {
        m[str[i]]++;
        if (m[str[i]] == 1)
        {
            res[str[i]] = i;
        }
        else if (m[str[i]] == 2)
        {
            res[str[i]] = -1;
        }
    }
    int mark = str.size();
    for (int i = 0; i < 123; i++)
    {
        if (res[i] != -1)
        {
            mark = min(mark, res[i]);
        }
    }
    return mark == str.size() ? -1 : mark;
}

void test()
{
}

int main()
{
    test();
    return 0;
}