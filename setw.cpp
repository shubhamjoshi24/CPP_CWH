#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 5, b = 67, c = 4673;
    cout << "the value of a without setw is :" << a << endl;
    cout << "the value of b without setw is :" << b << endl;
    cout << "the value of c without setw is :" << c << endl;

    cout << "the value of a :" << setw(10) << a << endl;
    cout << "the value of b :" << setw(10) << b << endl;
    cout << "the value of c :" << setw(10) << c << endl;
    return 0;
}