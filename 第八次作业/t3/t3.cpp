#include <iostream>
#include <iomanip>
using namespace std;
double count(double score[], int n)
{
    int passCount = 0;
    for (int i = 0; i < n; ++i)
    {
        if (score[i] >= 60.0)
        {
            passCount++;
        }
    }
    return (((double)passCount) / n) * 100.0;
}
int main()
{
    const int MAX_SIZE = 40;
    double scores[MAX_SIZE];
    int n;
    cout << "请输入学生人数n (n <= 40): ";
    cin >> n;
    printf("请输入%d个学生的《程序设计》成绩：\n", n);
    for (int i = 0; i < n; ++i)
    {
        cin >> scores[i];
    }
    double passRate = count(scores, n);
    printf("《程序设计》课程的及格率为%.2f%%\n", passRate);
    return 0;
}