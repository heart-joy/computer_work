#include <iostream>

using namespace std;

void print_anti_triangle(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << n - i + 1;
        }
        cout << endl;
    }
}

int main()
{
  int n;
  char choice;
  do
  {
      cout << "*****************************" << endl;
      cout << "请输入图形的行数(1~9)：";
      cin >> n;
      print_anti_triangle(n);
      printf("是否继续输出图形？请输入y或n：");
      cin >> choice;
  }while(choice == 'y');
  return 0;
}