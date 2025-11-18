/*编程实现：输入n个整数并存入某一维数组中，找出其中的最大值，并将其删除。如果有多个相同的最大值，则只删除最后一个。*/
#include <iostream>
using namespace std;
const int SIZE = 50;
int main()
{
    int arr[SIZE];
    int n, maxIndex = 0;
    cout << "请输入数组元素的个数(n<=20): ";
    cin >> n;
    cout << "请输入" << n << "个数组元素:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= arr[maxIndex])
        {
            maxIndex = i;
        }
    }
    for (int i = maxIndex; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "删除最元素后的数组元素为:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}