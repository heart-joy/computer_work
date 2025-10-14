#include <iostream>
using namespace std;

int main()
{
  char ch;
  printf("请输入一个字符:");
  scanf("%c", &ch);
  if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  {
    printf("输入的字符%c是英文字母\n", ch);
  }
  else
  {
    printf("输入的字符%c不是英文字母\n", ch);
  }
  return 0;
}