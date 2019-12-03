#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//顺时针打印矩阵
vector<int> printMatrix(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    if (m == 0 || n == 0)
    {
        return {};
    }
    vector<vector<bool>> mark(matrix.size(), vector<bool>(matrix[0].size(), false));
    vector<int> res;
    int low = 0, high = m - 1, down = 0, up = n - 1;
    while (low <= high && down <= up)
    {
        for (int j = down; j <= up; j++)
        {
            res.push_back(matrix[low][j]);
        }
        for (int i = low + 1; i <= high; i++)
        {
            res.push_back(matrix[i][up]);
        }
        if (high != low)
        {
            for (int j = up - 1; j >= down; j--)
            {
                res.push_back(matrix[high][j]);
            }
        }
        if (down != up)
        {
            for (int i = high - 1; i > low; i--)
            {
                res.push_back(matrix[i][down]);
            }
        }
        low++;
        high--;
        down++;
        up--;
    }
    return res;
}

//方法2
vector<int> printMatrix2(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    if (m == 0 || n == 0)
    {
        return {};
    }
    vector<vector<bool>> mark(matrix.size(), vector<bool>(matrix[0].size(), false));
    vector<int> res;
    int i = 0, j = 0, k = 0;
    while (k < m * n)
    {
        while (j < n && mark[i][j] == false)
        {
            res.push_back(matrix[i][j]);
            mark[i][j] = true;
            k++;
            j++;
        }
        j--;
        i++;
        while (i < m && mark[i][j] == false)
        {
            res.push_back(matrix[i][j]);
            mark[i][j] = true;
            k++;
            i++;
        }
        i--;
        j--;
        while (j >= 0 && mark[i][j] == false)
        {
            res.push_back(matrix[i][j]);
            mark[i][j] = true;
            k++;
            j--;
        }
        j++;
        i--;
        while (i >= 0 && mark[i][j] == false)
        {
            res.push_back(matrix[i][j]);
            mark[i][j] = true;
            k++;
            i--;
        }
        i++;
        j++;
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
