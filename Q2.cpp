#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "请给电影打分（0~10）：";
    cin >> score;

    if (score >= 9)
        cout << "你认为电影是经典！" << endl;
    else if (score >= 7)
        cout << "你认为电影是非常好！" << endl;
    else if (score >= 5)
        cout << "你认为电影是一般！" << endl;
    else
        cout << "你认为电影是烂片！" << endl;

    return 0;
}
