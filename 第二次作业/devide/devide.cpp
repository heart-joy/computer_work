#include <iostream>
using namespace std;
int main()
{
  int a;
  printf("请输入一个整数:");
  scanf("%d", &a);
  if(a % 4 == 0)
  {
    printf("%d能被4整除\n", a);
  }
  else
  {
    printf("%d不能被4整除\n", a);
  }
  if(a % 6 != 0)
  {
    printf("%d不能被6整除\n", a);
  }
  else
  {
    printf("%d能被6整除\n", a);
  }
  return 0;
}