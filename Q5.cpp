#include <iostream>
using namespace std;

int main()
{
    int n, a, term = 0, sum = 0;
    cout << "请输入n和a：";
    cin >> n >> a;

    for (int i = 1; i <= n; i++)
    {
        term = term * 10 + a; // 2 -> 22 -> 222
        sum = sum + term;
    }

    cout << "数列的和为：" << sum << endl;
    return 0;
}
