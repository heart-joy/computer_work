#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number,ans,cnt = 0;
    printf("请输入一个二进制整数：");
    scanf("%d", &number);
    while(number != 0)
    {
        ans += (number % 10) * pow(2,cnt);
        number /= 10;
        cnt ++;
    }
    printf("转换成十进制是：%d\n", ans);
    return 0;
}