#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks[2][3] = {{4, 5, 546},
                       {54, 6, 7}};
    // for (int i = 0; i <= 3; i++)
    // {
    //     cout << "enter the value of " << i << " element of the array" << endl;
    //     cin >> marks[i];
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << marks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}