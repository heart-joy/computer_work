#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int h, m;
  printf("�����������n:");
  scanf("%d", &n);
  h = n / 60;
  m = n % 60;
  printf("%d���ӿɻ���Ϊ��%dСʱ%d����\n", n, h, m);
  return 0;
}