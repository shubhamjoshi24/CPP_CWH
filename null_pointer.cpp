#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 12;
    int *ptr = NULL;
    // int *ptr = &a;

    if (ptr != NULL)
    {
        cout << *ptr;
    }
    else
    {
        cout << "The pointer is NULL Pointer and cannot be derefrenced" << endl;
    }

    return 0;
}