#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number,ans,cnt = 0;
    printf("������һ��������������");
    scanf("%d", &number);
    while(number != 0)
    {
        ans += (number % 10) * pow(2,cnt);
        number /= 10;
        cnt ++;
    }
    printf("ת����ʮ�����ǣ�%d\n", ans);
    return 0;
}