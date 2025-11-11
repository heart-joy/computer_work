#include <iostream>
#include <cmath>
using namespace std;

bool is_point_in_rose(int x)
{
    int sum = 0;
    int xt = x;
    while(xt != 0)
    {
        sum += pow(xt % 10,4);
        xt /= 10;
    }
    return (sum == x);
}

int main()
{
    cout << "Ãµ¹å»¨ÊýÓÐ£º" << endl;
    for(int i = 1000;i <= 9999;i ++)
    {
        if(is_point_in_rose(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}