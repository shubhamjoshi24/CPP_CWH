#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12;
    int *ptr; // this is a wild pointer.
    // *ptr = 244; // this is not a good thing to do.
    ptr = &a; // ptr is no longer a wild pointer.
    cout << *ptr << endl;
    return 0;
}