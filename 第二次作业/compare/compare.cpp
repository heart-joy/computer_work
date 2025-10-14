#include <iostream>
using namespace std;
int main()
{
  int a, b,max,min;
  printf("请输入两个整数:");
  scanf("%d%d", &a, &b);
  if(a > b)
  {
    max = a;
    min = b;
  }
  else
  {
    max = b;
    min = a;
  }
  printf("较大数为:%d\n", max);
  printf("较小数为:%d\n", min);
  return 0;
}

