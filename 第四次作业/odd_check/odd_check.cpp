#include <iostream>
using namespace std;

int main()
{
  int number，odd_count = 0, even_count = 0;
  printf("请输入一系列正整数（输入0或者负数表示结束）:\n");
  while (true)
  {
    scanf("%d", &number);
    if (number <= 0)
      break;
    if (number % 2 != 0)
       odd_count++;
    else
        even_count++;
  }
  printf("奇数个数为：%d\n", odd_count);
  printf("偶数个数为：%d\n", even_count);
  return 0;
}