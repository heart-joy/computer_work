#include <iostream>
#define dl double
using namespace std;

int main()
{
  dl total,money;
  printf("��������Ȼ����ʹ���� (������):");
  scanf("%lf", &total);
  if(total <= 360)
  {
    money = total * 2.02;
  }
  else if(total > 360 && total <= 600)
  {
    money = 360 * 2.02 + (total - 360) * 2.43;
  }
  else if(total < 0)
  {
    printf("�����������!\n");
    return 0;
  }
  else
  {
    money = 360 * 2.02 + (600 - 360) * 2.43 + (total - 600) * 3.04;
  }
  printf("��һ����Ȼ���ѵ��ܼ�:%.1lfԪ\n", money);
  return 0;
}