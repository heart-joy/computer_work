#include <bits/stdc++.h>
using namespace std;
// �Ӽ�������һ��СдӢ����ĸ��������Ӧ��ASCII�룬���㲢�������ĸ��26��Ӣ����ĸ�е���š�
int main()
{
    char ch;
    int ascii, order;
    printf("������һ��СдӢ����ĸ:");
    scanf("%c", &ch);
    ascii = (int)ch;
    order = ascii - 96;
    printf("Ӣ����ĸ%c��ASCII����%d,",ch, ascii);
    printf("��26��Ӣ����ĸ�еĵ�%d����ĸ", order);
    return 0;
}