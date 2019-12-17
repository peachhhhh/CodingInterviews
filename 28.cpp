#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//数组中出现次数超过一半的数字(求众数，leetcode-169)，Boyer-Moore(摩尔)投票算法
int MoreThanHalfNum_Solution(vector<int> numbers)
{
    int n = numbers.size();
    int mark, score;
    for (int i = 0; i < n; i++)
    {
        mark = numbers[i];
        score = 1;
        while (i < n && score > 0)
        {
            i++;
            if (numbers[i] == mark)
            {
                score++;
            }
            else
            {
                score--;
            }
        }
    }
    score = 0;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == mark)
        {
            score++;
        }
    }
    return score > n / 2 ? mark : 0;
}

void test()
{
}

int main()
{
    test();
    return 0;
}
