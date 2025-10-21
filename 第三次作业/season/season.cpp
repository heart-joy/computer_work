#include <iostream>
using namespace std;
int main()
{
  int month;
  printf("请输入月份:");
  scanf("%d", &month);
  if(month < 1 || month > 12)
  {
    printf("月份输入错误!\n");
    return 0;
  }
  switch(month)
  {
    case 3:
    case 4:
    case 5:
      printf("%d月处于春季\n", month);
      break;
    case 6:
    case 7:
    case 8:
      printf("%d月处于夏季\n", month);
      break;
    case 9:
    case 10:
    case 11:
      printf("%d月处于秋季\n", month);
      break;
    default:
      printf("%d月处于冬季\n", month);
      break;
  }
  return 0;
}
