#include <iostream>
#define dl double
using namespace std;

dl func(dl x)
{
  if(x < 8)
  {
    return x / 5 - 1;
  }
  else
  {
    return 3 * (x + 1);
  }
}
int main()
{
  dl x;
  printf("������x��ֵ(ʵ��):");
  scanf("%lf", &x);
  printf("y=%lf\n",func(x));
  return 0;
}