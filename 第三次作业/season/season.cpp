//从键盘输入月份，判断该月是什么季节？提示：3~5月为春季，6~8月为夏季，9~11月为秋季，12、1、2月为冬季。
//要求：判断季节前，先使用if-else语句判断输入月份的合法性，然后使用switch语句判断季节，且switch中的case分句尽量少。
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
