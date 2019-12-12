#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(vector<string> &res, string s, int pos)
{
    if (pos == s.size() - 1)
    {
        if (find(res.begin(), res.end(), s) == res.end())
        {
            res.push_back(s); //如果res中已有重复结果，则不push
        }
        return;
    }
    for (int i = pos; i < s.size(); i++)
    {
        swap(s[i], s[pos]);
        dfs(res, s, pos + 1);
        swap(s[i], s[pos]);
    }
}

//字符串的排列(全排列，leetcode-46)
vector<string> Permutation(string str)
{
    vector<string> res;
    dfs(res, str, 0);
    sort(res.begin(), res.end()); //转换成字典序
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
