#include <iostream>
#include <time.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int reverse_number(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}
bool is_prime(int num)
{
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));
    int n;
    cout << "请输入数据个数：";
    cin >> n;
    printf("随机产生的%d个数中的可逆素数有：\n", n);
    for (int i = 0; i < n; i++)
    {
        int rand_num = rand() % (500 - 10 + 1) + 10; // 生成[10,500]范围内的随机数
        int reversed_num = reverse_number(rand_num);
        if (is_prime(rand_num) && is_prime(reversed_num))
        {
            cout << rand_num << endl;
        }
    }
    return 0;
}
