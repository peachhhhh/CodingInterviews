#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//二维数组中的查找
bool Find(int target, vector<vector<int>> array)
{
    if (array.size() == 0 || array[0].size() == 0)
    {
        return false;
    }
    int m = array.size(), n = array[0].size();
    int i = m - 1, j = 0;
    while (i >= 0 && j < n)
    {
        if (target < array[i][j])
        {
            i--;
        }
        else if (target > array[i][j])
        {
            j++;
        }
        else
        {
            return true;
        }
    }
    return false;
}

void test()
{
}

int main()
{
    test();
    return 0;
}
