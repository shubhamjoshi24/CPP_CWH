#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 32;
    int *ptr = &a;
    // int *b = &(*ptr);
    int **b = &ptr;

    cout << "the value of a is " << *ptr << endl;
    cout << "the address of a is " << &a << endl;
    cout << "the address of a is " << ptr << endl;
    cout << "the address of a is " << &(*ptr) << endl;
    cout << "the address of ptr is " << &ptr << endl;
    cout << "the address of ptr is " << b << endl;
    cout << "the address of a is " << *b << endl;
    cout << "the value of a is " << **b << endl;
    cout << "the address of b is " << &b << endl;
    return 0;
}