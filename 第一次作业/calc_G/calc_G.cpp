#include <bits/stdc++.h>
#define dl double
using namespace std;
const dl G = 6.67e-11;
int main()
{
    dl M,m,r,F;
    printf("请输入地球质量:");
    scanf("%lf",&M);
    printf("请输入月球质量:");
    scanf("%lf",&m);
    printf("请输入地月距离:");
    scanf("%lf",&r);
    F = G*M*m/(r*r);
    printf("地球与月球之间的引力为:%.5e\n",F);
    return 0;
}