#include <iostream>
using namespace std;

int main()
{
  char ch;
  printf("������һ���ַ�:");
  scanf("%c", &ch);
  if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  {
    printf("������ַ�%c��Ӣ����ĸ\n", ch);
  }
  else
  {
    printf("������ַ�%c����Ӣ����ĸ\n", ch);
  }
  return 0;
}