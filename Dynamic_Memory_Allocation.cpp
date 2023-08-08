#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int *p = new int(354);

    float *p = new float(133.7);

    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 340;

    // delete[] arr;

    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;

    int size;
    cout << "enter the size of array you want to store:" << endl;
    cin >> size;

    int *ptr = new int[size];

    cout << "Enter the numbers " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }

    cout << "values in the array are : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    }

    return 0;
}