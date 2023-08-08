#include <bits/stdc++.h>
using namespace std;
inline int product(int a, int b)
{
    // Not recommended to use inline functions with recursion, static variables and complex functions
    // static int c = 0; // this line execute only once
    // c = c + 1;        // next time this function run the value of c is retianed
    // return (a * b) + c;
    return (a * b);
}

int moneyReceived(int currentmoney, float interest = 1.1)
{
    return currentmoney * interest;
}

// int strlen(const char *p)
// {
// }
int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << "product of a and b is: " << product(a, b) << endl;

    int money = 100000;
    cout << "normal interest: " << moneyReceived(100000, 2.5);

    return 0;
}