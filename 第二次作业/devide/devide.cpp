#include <iostream>
using namespace std;
int main()
{
  int a;
  printf("������һ������:");
  scanf("%d", &a);
  if(a % 4 == 0)
  {
    printf("%d�ܱ�4����\n", a);
  }
  else
  {
    printf("%d���ܱ�4����\n", a);
  }
  if(a % 6 != 0)
  {
    printf("%d���ܱ�6����\n", a);
  }
  else
  {
    printf("%d�ܱ�6����\n", a);
  }
  return 0;
}