#include <iostream>
using namespace std;
int main()
{
  int a, b,max,min;
  printf("��������������:");
  scanf("%d%d", &a, &b);
  if(a > b)
  {
    max = a;
    min = b;
  }
  else
  {
    max = b;
    min = a;
  }
  printf("�ϴ���Ϊ:%d\n", max);
  printf("��С��Ϊ:%d\n", min);
  return 0;
}

