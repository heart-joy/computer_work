#include <iostream>
using namespace std;

const double up = 8.2;

int main()
{
  int num;
  double total,given,change;
  printf("������A��Ʒ����:");
  scanf("%d", &num);
  if(num < 0)
  {
    printf("��Ʒ�����������!\n");
    return 0;
  }
  if(num >= 30)
  {
    total = num * (up * 0.7);
  }
  else
  {
    total = num * up;
  }
  printf("��Ʒ���ܽ��Ϊ%.2lfԪ\n", total);
  printf("�����븶����:");
  scanf("%lf", &given);
  if(given < total)
  {
    printf("�������!\n");
    return 0;
  }
  change = given - total;
  printf("������Ϊ%.2lfԪ\n", change);
  return 0;
}