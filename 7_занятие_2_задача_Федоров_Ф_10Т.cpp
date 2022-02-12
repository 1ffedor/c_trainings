
// 7_занятие_2_задача_Федоров_Ф_10Т

#include <iostream>

using namespace std;

int main()
{
    int mn=2222, mx;
    int a[4][4] = {
        {1, 2, 4, 8}, 
        {12, 34, 17, 14}, 
        {178, 353, 3, 9}, 
        {94, 25, 91, 22}
    };
    mx = 0;
    for (int i = 0; i < 4; i ++)
    {
        for (int j = 0; j < 4; j ++)
        {
            if (a[i][j] < mn)
            {
                mn = a[i][j];
            }
            if (a[i][j] > mx)
            {
                mx = a[i][j];
            }
        }
    }
    cout << "min - " << mn;
    cout << "\n";
    cout << "max - " << mx;
    return 0;
}
