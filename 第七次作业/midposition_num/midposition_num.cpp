/*编程实现：输入n个有序的数据并存入某一维数组中，求该数组的中位数（中位数是指排列在有序数组中间的那个数，如果数据个数为偶数，则中位数等于中间那两个元素的平均值）。*/
#include <iostream>
using namespace std;
const int SIZE = 20;
int main()
{
    int n;
    double arr[SIZE], mid;
    cout << "请输入一维数组元素的个数n(n<=20): ";
    cin >> n;
    printf("请按升序输入%d个浮点数:\n", n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n % 2 == 0)
    {
        mid = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
    else
    {
        mid = arr[n / 2]; 
    }
    cout << "数组的中位数为: " << mid << endl;
    return 0;
}