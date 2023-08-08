#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are 18 years old." << endl;
        break;
    case 40:
        cout << "You are 40 years old." << endl;
        break;
    case 10:
        cout << "You are kid boy." << endl;
        break;
    case 20:
        cout << "You are 20 years old Shubham Joshi." << endl;
        break;
    default:
        cout << "No Age matched." << endl;
    }
    cout << "Done with Switch-Case" << endl;
    return 0;
}