#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k;
    int arr[3][4][2] =

        // {

        //     {{1, 2}, {3, 4}, {43, 47}, {87, 12}},
        //     {{54, 56}, {43, 90}, {478, 64}, {87, 943}},
        //     {{65, 76}, {53, 87}, {867, 345}, {97, 98}}

        // };

        // Line no. 8-14 and 18-41 are the same value. Just press enter button after each row. example we press enter button after{1,2}.

        {

            {{1, 2},
             {3, 4},
             {43, 47},
             {87, 12}

            },

            {{54, 56},
             {43, 90},
             {478, 64},
             {87, 943}

            },

            {{65, 76},
             {53, 87},
             {867, 345},
             {97, 98}

            }

        };

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}