/*编程实现：产生若干个[1，100]范围内的随机整数并存入某一维数组中，并按样张格式输出数组元素；求数组元素中奇数元素的个数、奇数元素的平均值、偶数元素的个数、偶数元素的平均值。要求：输出数组元素时，每行输出5个数，数据域宽为5。平均值保留两位小数。*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
const int SIZE = 50;
int main()
{
    int arr[SIZE],n;
    int oddCount = 0, evenCount = 0;
    int oddSum = 0, evenSum = 0;

    srand(time(NULL));
    cout << "请输入一维数组元素的个数n(n<=50): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    cout << "数组元素如下：" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << arr[i];
        if ((i + 1) % 5 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i ++)
    {
        if (arr[i] % 2 == 0)
        { 
            evenCount++;
            evenSum += arr[i];
        }
        else
        {
            oddCount++;
            oddSum += arr[i];
        }
    }

    printf("奇数元素有%d个，其平均值为%0.2lf\n", oddCount,(double)oddSum/oddCount);
    printf("偶数元素有%d个，其平均值为%0.2lf\n", evenCount,(double)evenSum/evenCount);

    return 0;
}