#include <bits/stdc++.h>
#define dl double
using namespace std;
const dl profit = 0.034;
int main()
{
    dl money, total;
    printf("���������Ԫ):");
    scanf("%lf", &money);
    total = money * (1 + profit * 3);
    printf("�������ı�Ϣ�ϼ�Ϊ: %.2lfԪ\n",total);
    return 0;
}