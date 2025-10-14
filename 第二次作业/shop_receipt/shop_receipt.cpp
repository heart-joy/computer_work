#include <iostream>
using namespace std;

const double up = 8.2;

int main()
{
  int num;
  double total,given,change;
  printf("请输入A商品数量:");
  scanf("%d", &num);
  if(num < 0)
  {
    printf("商品数量输入错误!\n");
    return 0;
  }
  if(num >= 30)
  {
    total = num * (up * 0.7);
  }
  else
  {
    total = num * up;
  }
  printf("商品的总金额为%.2lf元\n", total);
  printf("请输入付款金额:");
  scanf("%lf", &given);
  if(given < total)
  {
    printf("付款金额不足!\n");
    return 0;
  }
  change = given - total;
  printf("找零金额为%.2lf元\n", change);
  return 0;
}