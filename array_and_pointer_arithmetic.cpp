#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int a = 3;
    // int *ptr = &a;
    // cout << ptr << endl;
    // cout << ptr + 1 << endl;

    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int *arrayptr = arr;
    cout << arr[2] << endl;
    cout << &arr[0] << endl;
    cout << arr << endl;
    cout << &arr[4] << endl;
    cout << arr + 4 << endl;

    arrayptr++;
    // arr++
    // this line shows error because we can't increase or decrease an array but we increase or decrease pointer.
    cout << *(&arr[3]) << endl;
    cout << arr[3] << endl;
    cout << *(arr + 3) << endl;

    cout << *(&arr[5]) << endl;
    cout << arr[5] << endl;
    cout << *(arr + 5) << endl;

    // for address        &arr[i] = (arr + i)
    // for value          arr[i] = *(&arr[i]) = *(arr + i)
    return 0;
}