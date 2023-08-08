#include <bits/stdc++.h>
using namespace std;
int func1(int array[])
{
    for (int i = 0; i <= 3; i++)
    {
        cout << "the value at " << i << " is " << array[i] << endl;
        array[0] = 9; // if we change value here, it get reflected in main function
    }
    return 0;
}
void func2(int *ptr)
{
    for (int i = 0; i <= 3; i++)
    {
        // cout << "the value at " << i << " is " << ptr[i] << endl;
        cout << "the value at " << i << " is " << *(&ptr[i]) << endl;
        // cout << "the value at " << i << " is " << *(ptr + i) << endl;
    }
    *(ptr + 2) = 90; // if we change value here, it get reflected in main function
}
void func3(int arr[2][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << /*"the value at " << i << " and " << j << " is " <<*/ arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[] = {3, 5, 6, 1};

    int array[2][3] = {{2, 4, 3},
                       {9, 90, 5}};

    // cout << "the value at index 0 is " << arr[0] << endl;
    // func1(arr);
    // cout << "the value at index 0 is " << arr[0] << endl;

    // func2(arr);
    // cout << "Shubham Joshi" << endl;
    // func2(arr);

    func3(array);
    return 0;
}