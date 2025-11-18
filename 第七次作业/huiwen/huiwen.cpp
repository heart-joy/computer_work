/*编程实现：将一个整数的各位数字按从低位到高位的顺序存入某一维数组中，然后判断该整数是否为回文数（即判断一维数组是否为镜像数组）。
回文数是指正读与反读都一样的数，例如：12321是回文数，12312不是回文数。
*/
#include <iostream>
using namespace std;
const int SIZE = 20;
int main()
{
    int arr[SIZE];
    int num, temp, count = 0;
    bool isPalindrome = true;
    cout << "请输入一个正整数（不超过10位）: ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        arr[count] = temp % 10;
        temp /= 10;
        count++;
    }
    for (int i = 0; i < count / 2; i++)
    {
        if (arr[i] != arr[count - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
    {
        cout << "输入的正整数是回文数。" << endl;
    }
    else
    {
        cout << "输入的正整数不是回文数。" << endl;
    }
    return 0;
} 