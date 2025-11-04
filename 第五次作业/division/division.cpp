#include <iostream>
using namespace std;
int main()
{
    int n;
    printf("«Î ‰»În£∫");
    scanf("%d", &n);
    printf("%d=", n);
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0 && n != i)
        {
            printf("%d*", i);
            n = n / i;
        }
        if (n == i)
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}