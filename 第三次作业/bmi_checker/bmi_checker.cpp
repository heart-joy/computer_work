#include <iostream>
#define dl double
using namespace std;

int main()
{
  dl bmi;
  int height, weight;
  printf("���������أ����:");
  scanf("%d", &weight);
  printf("��������ߣ����ף�:");
  scanf("%d", &height);
  bmi = weight / ((height / 100.0) * (height / 100.0));
  printf("BMI=%.2f,", bmi);
  if(bmi < 18.5)
  {
    printf("ƫ��!\n");
  }
  else if(bmi >= 18.5 && bmi < 24)
  {
    printf("����!\n");
  }
  else if(bmi >= 24 && bmi < 27)
  {
    printf("ƫ��!\n");
  }
  else if(bmi >= 27 && bmi < 30)
  {
    printf("����!\n");
  }
  else if(bmi >= 30 && bmi < 40)
  {
    printf("�ضȷ���!\n");
  }
  else
  {
    printf("���ضȷ���!\n");
  }
  return 0;
}