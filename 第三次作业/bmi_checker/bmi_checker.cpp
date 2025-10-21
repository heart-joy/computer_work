#include <iostream>
#define dl double
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
  if(bmi < 18.5)
  {
    printf("偏瘦!\n");
  }
  else if(bmi >= 18.5 && bmi < 24)
  {
    printf("正常!\n");
  }
  else if(bmi >= 24 && bmi < 27)
  {
    printf("偏胖!\n");
  }
  else if(bmi >= 27 && bmi < 30)
  {
    printf("肥胖!\n");
  }
  else if(bmi >= 30 && bmi < 40)
  {
    printf("重度肥胖!\n");
  }
  else
  {
    printf("极重度肥胖!\n");
  }
  return 0;
}