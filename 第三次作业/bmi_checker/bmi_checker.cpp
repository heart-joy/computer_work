#include <iostream>
#define double dl
using namespace std;

int main()
{
  dl bmi;
  int height, weight;
  printf("请输入体重（公斤）:");
  scanf("%d", &weight);
  printf("请输入身高（厘米）:");
  scanf("%d", &height);
  bmi = weight / ((height / 100.0) * (height / 100.0));
  printf("BMI=%.2f,", bmi);
  switch(bmi)
  {
    case bmi < 18.5:
      printf("偏瘦!\n");
      break;
    case bmi >= 18.5 && bmi < 24.0:
      printf("正常!\n");
      break;
    case bmi >= 24.0 && bmi < 27.0:
      printf("偏胖!\n");
      break;
    case bmi >= 27.0 && bmi < 30.0:
      printf("肥胖!\n");
      break;
    case bmi >= 30.0 && bmi < 40.0:
      printf("重度肥胖!\n");
      break;
    case bmi >= 40.0:
      printf("极重度肥胖!\n");
      break;
  }
  return 0;
}