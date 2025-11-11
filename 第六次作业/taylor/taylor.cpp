#include <iostream>
#include <cmath>
#define PI 3.141593
using namespace std;

double taylor_cos(double x)
{
    double term = 1.0;
    double sum = term;
    int n = 1;

    while (abs(term) >= 1e-7)
    {
        term *= -x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n ++;
    }

    return sum;
}

int main()
{
  double x;
  cout << "请输入一个角度值：";
  cin >> x;
  double rad = x / 180.0 * M_PI; // 将角度转换
  double y = taylor_cos(rad);
  printf("cos(%lf)=%06lf\n", x, y);
  return 0;
}