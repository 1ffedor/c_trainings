
// 6_занятие_1_задача_Федоров_Ф_10Т

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[8];
    int n, i, b;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int j =0; j < n; j ++)
    {
        cout << a[j] << " ";
    }
    return 0;
}
