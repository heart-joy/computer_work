#include <iostream>
using namespace std;
int insert(int a[], int n, int x)
{
    int i;
    for (i = n - 1; (i >= 0 && a[i] < x); i--)
    {
        a[i + 1] = a[i];
    }
    a[i + 1] = x;
    return i + 1;
}
int main()
{
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;
    cout << "请输入原降序数列的数据个数 (< 20): ";
    cin >> n;
    cout << "请按照输入 " << n << " 个数（降序）:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for(int i = 1;i <= 2;i ++)
    {
      int x;
      printf("请输入欲插入的第%d个数: ", i);
      cin >> x;
      int position = insert(arr, n, x);
      printf("插入在第%d个位置\n", position + 1);
      printf("插入第%d个数之后的数据序列为：\n", i);
      for (int i = 0; i <= n; ++i)
      {
          cout << arr[i] << " ";
      }
      cout << endl;
    }
    return 0;
}