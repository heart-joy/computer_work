#include <bits/stdc++.h>
using namespace std;
int main() 
{
    double weight, height, bmi;
    printf("���������أ�����):");
    scanf("%lf", &weight);
    printf("��������ߣ���):");
    scanf("%lf", &height);
    bmi = weight / (height * height);
    printf("���˵���������ָ��Ϊ: %.2lf kg/m^2\n", bmi);
    return 0;
}