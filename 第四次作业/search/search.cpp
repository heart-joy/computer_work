#include <iostream>
using namespace std;

int main()
{
  int m,n,cnt = 0;
  printf("请输入整数范围m和n:");
  scanf("%d %d", &n, &m);
  for(int i = n;i <= m;i ++)
  {
    if(i % 3 == 2 && i % 5 == 1 && i % 7 == 4)
    {
      printf("%d\n", i);
      cnt ++;
    }
  }
  printf("总共有%d个符合要求的整数\n", cnt);
  return 0;
}