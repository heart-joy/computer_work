#include <iostream>
using namespace std;

int main()
{
  int year, month, day, total_days = 0;
  printf("������������:");
  scanf("%d%d%d", &year, &month, &day);
  //�������֮ǰ��������
  for(int m = 1; m < month; m++)
  {
    if(m == 4 || m == 6 || m == 9 || m == 11)
    {
      total_days += 30;
    }
    else if(m == 2)
    {
      if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
      {
        total_days += 29; 
      }
      else
      {
        total_days += 28; 
      }
    }
    else
    {
      total_days += 31;
    }
  }
  total_days += day;
  printf("����%d��ĵ�%d��\n", year, total_days);
  if(total_days % 5 == 1 || total_days % 5 == 2 || total_days % 5 == 3)
  {
    printf("��һ���ڴ���\n", year, month, day);
  }
  else
  {
    printf("��һ����ɹ��\n", year, month, day);
  }
  return 0;
}