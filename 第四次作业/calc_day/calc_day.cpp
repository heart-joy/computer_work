#include <iostream>
using namespace std;

int main()
{
    int n, days = 1;
    printf("����������������");
    scanf("%d", &n);
    while (n >= 0)
    {
      n = n - (n / 2 + 2);
      if(n < 0) n = 0;
      printf("��%d��ʣ�£�%d��\n",days, n);
      if(n <= 0) 
      {
        printf("��Ҫ%d������\n", days);
        break;
      }
      else
      {
        days ++;
      }
    }
    return 0;
}