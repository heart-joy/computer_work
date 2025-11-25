#include <iostream>
#include <iomanip>
using namespace std;
void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - 1 - i; ++j)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
    cout << "请输入数组的实际长度: ";
    cin >> n;
    cout << "请输入待排序的数：" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    sort(arr, n);
    cout << "排序后的结果为：" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << setw(4) << arr[i];
    }
    cout << endl;
    return 0;
}