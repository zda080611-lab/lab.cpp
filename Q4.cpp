#include <iostream>
using namespace std;

int main()
{
    int num, bai, shi, ge;
    for (num = 100; num <= 999; num++)
    {
        bai = num / 100;
        shi = num / 10 % 10;
        ge = num % 10;
        if (num == bai * bai * bai + shi * shi * shi + ge * ge * ge)
            cout << num << endl;
    }
    return 0;
}
