#include <iostream>
using namespace std;
/*欧拉筛*/
int main()
{
    int n,m,sum1 = 0,sum2 = 0;
    printf("请输入范围m和n：");
    scanf("%d%d", &n, &m);
    int max_limit = max(n, m), min_limit = min(n, m);
    bool is_prime[max_limit + 1];
    for(int i = 2; i <= max_limit; i++)
    {
        is_prime[i] = true;
    }
    for (int i = 2; i * i <= max_limit; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= max_limit; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    printf("%d~%d之间满足条件的素数为：\n");
    for(int i = min_limit;i <= max_limit;i ++)
    {
        if((is_prime[i] && i >= 2) && (i % 10 == 3 || i % 10 == 7))
        {
          printf("%d ", i);
          sum1 += i;
          if((i / 10) % 10 != 6)
          {
              sum2 += i;
          }
        }
    }
    printf("\n");
    printf("满足条件的素数和是：%d\n", sum1);
    printf("满足条件且十位数不为6的素数和是：%d\n", sum2);
    return 0;
}