#include <bits/stdc++.h>
using namespace std;
int main() 
{
    double weight, height, bmi;
    printf("请输入体重（公斤):");
    scanf("%lf", &weight);
    printf("请输入身高（米):");
    scanf("%lf", &height);
    bmi = weight / (height * height);
    printf("此人的身体质量指数为: %.2lf kg/m^2\n", bmi);
    return 0;
}