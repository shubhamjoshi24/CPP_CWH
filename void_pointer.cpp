#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12;
    float b = 8.9;
    void *ptr = &b; // void pointer stores address of int 'a'.
    cout << "the value of b is " << *(float *)ptr << endl;
    ptr = &a; // void pointer now stores address of float 'b'.
    cout << "the value of a is " << *(int *)ptr << endl;

    return 0;
}