#include <iostream>
using namespace std;

int main()
{
  int n;
  char ch;
  printf("请输入行数和字符:");
  scanf("%d %c", &n, &ch);
  for(int i = 1;i <= n;i ++)
  {
    for(int k = 1;k <= n - i;k ++)
    {
      printf("  ");
    }
    for(int j = 1;j <= i;j ++)
    {
      printf("%c ", ch);
    }
    printf("\n");
  }
  return 0;
}