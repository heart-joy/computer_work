/*中国有句俗语叫“三天打鱼两天晒网”。设“打鱼”和“晒网”的周期为5天（第1、2、3天打鱼，第4、5天晒网）。
编程实现：从键盘输入某年某月某日，使用switch语句判断这一天是在“打鱼”还是在“晒网”？（这里假设从当年的第1天算起，并要求考虑闰年）。
提示：
（1）由于“打鱼”和“晒网”的周期为5天，可以先计算出这一天是这一年的第几天，再将天数除以5，然后根据余数判断是在“打鱼”还是在“晒网”。
（2）闰年：能被4整除但不能被100整除的年份、或者是能被400整除的年份是闰年。闰年2月份有29天。*/\
#include <iostream>
using namespace std;

int main()
{
  int year, month, day, total_days = 0;
  printf("请输入年月日:");
  scanf("%d%d%d", &year, &month, &day);
  //计算该月之前的总天数
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
  printf("这是%d年的第%d天\n", year, total_days);
  if(total_days % 5 == 1 || total_days % 5 == 2 || total_days % 5 == 3)
  {
    printf("这一天在打鱼\n", year, month, day);
  }
  else
  {
    printf("这一点在晒网\n", year, month, day);
  }
  return 0;
}