#include <bits/stdc++.h>
#define dl double
using namespace std;
const dl profit = 0.034;
int main()
{
    dl money, total;
    printf("请输入存款本金（元):");
    scanf("%lf", &money);
    total = money * (1 + profit * 3);
    printf("三年后存款的本息合计为: %.2lf元\n",total);
    return 0;
}