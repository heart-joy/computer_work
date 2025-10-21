#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
  printf("请输入三角形的三条边长:");
  scanf("%d%d%d", &a, &b, &c);
  if(a + b > c && a + c > b && b + c > a)
  {
    printf("可以构成一般三角形\n");
  }
  else
  {
    printf("不能构成三角形\n");
  }
  return 0;
}