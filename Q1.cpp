#include <iostream>
using namespace std;

int main()
{
    double I, bonus; // I 是利润，bonus 是奖金，单位都是万元
    cout << "请输入当月利润（万元）：";
    cin >> I;

    if (I <= 10)
        bonus = I * 0.1;
    else if (I <= 20)
        bonus = 10 * 0.1 + (I - 10) * 0.075;
    else if (I <= 40)
        bonus = 10 * 0.1 + 10 * 0.075 + (I - 20) * 0.05;
    else if (I <= 60)
        bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + (I - 40) * 0.03;
    else if (I <= 100)
        bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + (I - 60) * 0.015;
    else
        bonus = 10 * 0.1 + 10 * 0.075 + 20 * 0.05 + 20 * 0.03 + 40 * 0.015 + (I - 100) * 0.01;

    cout << "应发放奖金总数为：" << bonus << "万元" << endl;
    return 0;
}
