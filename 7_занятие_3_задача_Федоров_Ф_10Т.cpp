
// 7_занятие_3_задача_Федоров_Ф_10Т

#include <iostream>

using namespace std;

int main()
{
    float b = 0, c = 0;
    int a[3][3] = {
        {1, 2, 4}, 
        {12, 34, 17}, 
        {178, 353, 3}, 
    };
    b = 0;
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            c += 1;
            b += a[i][j];
        }
    }
    cout << b / c;
    return 0;
}
