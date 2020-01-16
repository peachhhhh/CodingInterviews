#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//调整大顶堆
void adjustHeap(vector<int> &v, int i, int k)
{
    if (i > k / 2)
    {
        return;
    }
    int maxindex = i;
    int l = i * 2;
    int r = l + 1;
    if (v[l] > v[maxindex] && l < k)
    {
        maxindex = l;
    }
    if (v[r] > v[maxindex] && r < k)
    {
        maxindex = r;
    }
    if (maxindex != i)
    {
        swap(v[maxindex], v[i]);
        adjustHeap(v, maxindex, k);
    }
}

//构建大顶堆
void buildHeap(vector<int> &v, int k)
{
    for (int i = k / 2; i >= 0; --i)
    {
        adjustHeap(v, i, k);
    }
}

//最小的K个数，构建大小为k的大顶堆，每次将堆顶最大元素和新元素比较大小，取较小一个保留在堆顶，调整堆
vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
{
    int len = input.size();
    if (len == 0 || k > len)
    {
        return {};
    }
    buildHeap(input, k);
    for (int i = k; i < len; ++i)
    {
        if (input[0] > input[i])
        {
            input[0] = input[i];
            adjustHeap(input, 0, k);
        }
    }
    vector<int> res(input.begin(), input.begin() + k);
    return res;
}

void test()
{
    int a = 1 / 2;
    cout << a << endl;
}

int main()
{
    test();
    return 0;
}