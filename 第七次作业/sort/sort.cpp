/* 编程实现：输入一组数据并存入某一维数组中，用选择排序法完成数组元素的降序排列并输出*/
#include <iostream>
using namespace std;
const int SIZE = 20;
int main()
{
    int arr[SIZE];
    int n;
    cout << "请输入数组元素的个数(n<=20): ";
    cin >> n;
    cout << "请输入" << n << "个待排序的数:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
      for(int j = i + 1;j < n;j ++)
      {
        if(arr[i] < arr[j])
        {
          swap(arr[i],arr[j]);
        }
      }
    }
    cout << "排序后的结果为:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}