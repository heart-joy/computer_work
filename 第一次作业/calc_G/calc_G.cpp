#include <bits/stdc++.h>
#define dl double
using namespace std;
const dl G = 6.67e-11;
int main()
{
    dl M,m,r,F;
    printf("�������������:");
    scanf("%lf",&M);
    printf("��������������:");
    scanf("%lf",&m);
    printf("��������¾���:");
    scanf("%lf",&r);
    F = G*M*m/(r*r);
    printf("����������֮�������Ϊ:%.5e\n",F);
    return 0;
}