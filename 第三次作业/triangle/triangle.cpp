#include <iostream>
using namespace std;

int main()
{
  int a,b,c;
  printf("�����������ε������߳�:");
  scanf("%d%d%d", &a, &b, &c);
  if(a + b > c && a + c > b && b + c > a)
  {
    printf("���Թ���һ��������\n");
  }
  else
  {
    printf("���ܹ���������\n");
  }
  return 0;
}