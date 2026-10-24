#include <iostream>
using namespace std;

int main()
{
    int peaches = 1; // 第10天早上还剩1个
    for (int day = 9; day >= 1; day--) // 从第9天往回推
    {
        peaches = (peaches + 1) * 2;
    }

    cout << "猴子第一天共摘了" << peaches << "个桃子" << endl;
    return 0;
}
