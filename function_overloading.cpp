#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    cout << "Using functions with 2 arguments" << endl;
    return a + b;
}
int sum(int a, int b, int c)
{
    cout << "Using functions with 3 arguments" << endl;
    return a + b + c;
}

int main()
{
    cout << "the sum of a and b is: " << sum(5, 8) << endl;
    cout << "the sum of a, b and c is: " << sum(5, 8, 6) << endl;

    return 0;
}