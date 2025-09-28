#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int h, m;
  printf("请输入分钟数n:");
  scanf("%d", &n);
  h = n / 60;
  m = n % 60;
  printf("%d分钟可换算为：%d小时%d分钟\n", n, h, m);
  return 0;
}