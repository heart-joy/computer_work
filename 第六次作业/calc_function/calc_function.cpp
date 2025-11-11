#include <iostream>
#include <cmath>
#define PI 3.141593
using namespace std;

int main()
{
  double x;
  cout << "请输入一个角度值：";
  cin >> x;
  double y = sqrt( abs(5 * sin(x / 180 * PI)) + 8);
  cout << "计算结果为：" << y << endl;
  return 0;
}