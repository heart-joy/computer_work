#include <iostream>
#define dl double
using namespace std;

int main()
{
  dl total,money;
  printf("请输入天然气年使用量 (立方米):");
  scanf("%lf", &total);
  if(total <= 360)
  {
    money = total * 2.02;
  }
  else if(total > 360 && total <= 600)
  {
    money = 360 * 2.02 + (total - 360) * 2.43;
  }
  else if(total < 0)
  {
    printf("数据输入错误!\n");
    return 0;
  }
  else
  {
    money = 360 * 2.02 + (600 - 360) * 2.43 + (total - 600) * 3.04;
  }
  printf("这一年天然气费的总价:%.1lf元\n", money);
  return 0;
}