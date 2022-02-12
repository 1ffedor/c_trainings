
// 6_занятие_3_задача_Федоров_Ф_10Т

#include <iostream>

using namespace std;

int main()
{
    float b, c=0;
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 0; i < 8; i ++)
    {
        b += a[i];
        c += 1;
    }
    cout << b / c;
    return 0;
}
