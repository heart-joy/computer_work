#include <iostream>
using namespace std;

int main()
{
  int number��odd_count = 0, even_count = 0;
  printf("������һϵ��������������0���߸�����ʾ������:\n");
  while (true)
  {
    scanf("%d", &number);
    if (number <= 0)
      break;
    if (number % 2 != 0)
       odd_count++;
    else
        even_count++;
  }
  printf("��������Ϊ��%d\n", odd_count);
  printf("ż������Ϊ��%d\n", even_count);
  return 0;
}