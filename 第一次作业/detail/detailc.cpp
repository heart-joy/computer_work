#include <bits/stdc++.h>
using namespace std;
// 从键盘输入一个小写英文字母，输出其对应的ASCII码，计算并输出该字母在26个英文字母中的序号。
int main()
{
    char ch;
    int ascii, order;
    printf("请输入一个小写英文字母:");
    scanf("%c", &ch);
    ascii = (int)ch;
    order = ascii - 96;
    printf("英文字母%c的ASCII码是%d,",ch, ascii);
    printf("是26个英文字母中的第%d个字母", order);
    return 0;
}