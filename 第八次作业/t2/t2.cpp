#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int target, int &count)
{
    int left = 0;
    int right = size - 1;
    count = 0;

    while (left <= right)
    {
        count++;
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; 
        }
        else if (arr[mid] < target)
        {
            right = mid - 1; 
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}
int main()
{
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
    cout << "请输入数组元素的个数 (n <= 20): ";
    cin >> n;
    cout << "请按照降序输入 " << n << " 个元素:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int choice;
    do
    {
        int target, count;
        cout << "**************************************************" << endl;
        cout << "请输入要查找的数据: ";
        cin >> target;
        int result = binarySearch(arr, n, target, count);
        if (result != -1)
        {
            printf("查找成功！该数在第%d个位置\n", result + 1);
        } else {
            cout << "整数 " << target << " 未找到在数组中." << endl;
        }
        printf("查找%d总共比较：%d次\n", target, count);)
        cout << "如需继续查找请输入1，如需退出请输入其他整数: ";
        cin >> choice;
    } while (choice == 1);
    return 0;
}