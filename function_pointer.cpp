#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    cout << "Sum : " << sum(8, 9) << endl;
    int (*fptr)(int, int);   // declaring a function pointer
    fptr = &sum;             // creating a function pointer.
    int d = (*fptr)(45, 43); // derefrencing a function pointer.
    cout << "Sum : " << d << endl;

    return 0;
}