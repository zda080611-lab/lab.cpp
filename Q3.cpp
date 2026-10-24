#include <iostream>
using namespace std;

int main()
{
    int n, temp, rev = 0;
    cout << "请输入一个整数：";
    cin >> n;

    temp = n;
    while (temp > 0) // 把 n 倒过来
    {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if (rev == n)
        cout << n << " 是回文数" << endl;
    else
        cout << n << " 不是回文数" << endl;

    return 0;
}
