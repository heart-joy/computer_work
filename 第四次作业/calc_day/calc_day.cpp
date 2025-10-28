#include <iostream>
using namespace std;

int main()
{
    int n, days = 1;
    printf("请输入西瓜总数：");
    scanf("%d", &n);
    while (n >= 0)
    {
      n = n - (n / 2 + 2);
      if(n < 0) n = 0;
      printf("第%d天剩下：%d个\n",days, n);
      if(n <= 0) 
      {
        printf("需要%d天卖完\n", days);
        break;
      }
      else
      {
        days ++;
      }
    }
    return 0;
}