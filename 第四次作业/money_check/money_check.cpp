#include <iostream>
#define dl double
using namespace std;

int main()
{
    dl profit,money = 100;
    int cnt = 0;
    printf("�������������ʣ�");
    scanf("%lf", &profit);
    while(money <= 200)
    {
      money = money * (1 + profit);
      printf("%d����ֵΪ:%.3lf\n",cnt ++, money);
    }
    printf("��Ҫ%d��", cnt);
    return 0;
}