#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

void helloUser(int (*fptr)(int, int))
{
    cout << "Hello User" << endl;
    cout << "The sum is : " << fptr(3, 6) << endl;
}

void goodMorning(int (*fptr)(int, int))
{
    cout << "Good Morning User" << endl;
    cout << "The sum is : " << fptr(6, 7) << endl;
}

int main()
{
    int (*ptr)(int, int);
    ptr = &sum;
    goodMorning(ptr);
    helloUser(ptr);

    return 0;
}