#include <iostream>
using namespace std;

int main()
{
  int n;
  printf("ÇëÊäÈë×©Êı£º");
  scanf("%d", &n);
  printf(" ÄĞ Å® º¢ \n");
  for(int i = 0;i <= n / 3;i ++)
  {
    for(int j = 0;j <= (n - i * 3) / 2;j ++)
    {
      int k = n - (i * 3) - (j * 2);
      if(i + j + (k * 2) == n) printf(" %d %d %d\n", i, j, k * 2);
    }
  }
  return 0;
}