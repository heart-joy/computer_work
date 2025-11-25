#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    const int MAX = 100;
    int arr[MAX];
    int n;

    cout << "请输入一维数组元素的个数n(n <= 50):";
    cin >> n;

    srand((time(NULL)));
    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand() % 50 + 50;
    }

    cout << "删除偶数之前的一维数组：" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << setw(4) << arr[i];
        if ((i + 1) % 6 == 0) cout << endl;
    }
    cout << endl;

    int newSize = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 != 0)
        {
            arr[newSize++] = arr[i];
        }
    }

    cout << "删除偶数之后的一维数组：" << endl;
    for (int i = 0; i < newSize; ++i)
    {
        cout << setw(4) << arr[i];
        if ((i + 1) % 6 == 0) cout << endl;
    }
    cout << endl;

    return 0;
}