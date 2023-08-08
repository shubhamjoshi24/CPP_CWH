#include <bits/stdc++.h>
using namespace std;
void swap(int *x, int *y) // function for swapping numbers using call by refrence
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void changeValue(int *address)
{
    *address = 90; // change the value of element using pointer & call by refrence method.
}

void func(int *x, int *y)
{
    int c, d;
    c = *x + *y;
    cout << c << endl;
    d = *x - *y;
    cout << d << endl;
}

void swap1(int &a, int &b) // This will swap a and b using refrence variable.(Code with Harry- C++ Playlist video no. 16)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int &swap2(int &a, int &b) // This will swap a and b using return by refrence variable.(Code with Harry- C++ Playlist video no. 16)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    // int a, b;
    // cin >> a >> b;
    // swap(&a, &b);
    // cout << a << "   " << b;

    int a = 34;
    cout << "the value of a is " << a << endl;
    changeValue(&a);
    cout << "the value of a is " << a << endl;

    // int a, b;
    // cin >> a >> b;
    // cout << "the value of a is " << a << " & b is " << b << endl;
    // func(&a, &b);

    // int a, b;
    // cin >> a >> b;
    // swap1(a, b);//(Code with Harry- C++ Playlist video no. 16)
    // cout << a << "   " << b;
    // return 0;

    // int a, b;
    // cin >> a >> b;
    // swap2(a, b) = 456;//(Code with Harry- C++ Playlist video no. 16)
    // cout << a << "   " << b;

    return 0;
}