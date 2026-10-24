#include <iostream>
using namespace std;

int main()
{
    int f1 = 1, f2 = 1, f; // f1、f2 是前两个月的兔子对数
    cout << "第1个月：1对" << endl;
    cout << "第2个月：1对" << endl;

    for (int i = 3; i <= 20; i++)
    {
        f = f1 + f2; // 这个月的兔子 = 上个月 + 上上个月
        cout << "第" << i << "个月：" << f << "对" << endl;
        f1 = f2;
        f2 = f;
    }

    return 0;
}
