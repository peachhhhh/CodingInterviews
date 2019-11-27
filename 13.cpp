#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

//调整数组顺序使奇数位于偶数前面，类似冒泡排序
void reOrderArray(vector<int> &array)
{
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = array.size() - 1; j > i; j--)
        {
            if (array[j] % 2 == 1 && array[j - 1] % 2 == 0)
            {
                swap(array[j], array[j - 1]);
            }
        }
    }
}

void test()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    reOrderArray(v);
    return;
}

int main()
{
    test();
    return 0;
}