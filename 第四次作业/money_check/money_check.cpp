#include <iostream>
#define dl double
using namespace std;

int main()
{
    dl profit,money = 100;
    int cnt = 0;
    printf("请输入年增长率：");
    scanf("%lf", &profit);
    while(money <= 200)
    {
      money = money * (1 + profit);
      printf("%d年后产值为:%.3lf\n",cnt ++, money);
    }
    printf("需要%d年", cnt);
    return 0;
}