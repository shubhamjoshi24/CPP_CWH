#include <bits/stdc++.h>
using namespace std;
int name(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        cout << str[i];
        i++;
    }
    cout << endl;
    return 0;
}
int main()
{
    // char str[] = {'h', 'a', 'r', 'r', 'y', '\0'};
    // char str[] = "harry";
    char str[5];

    // We are often/mostly use fgets() function instead of gets() function. However, it is removed by C standard because gets() allow you to input any length of charaters. Hence, there might be a buffer overflow.

    fgets(str, sizeof(str), stdin);
    // gets(str);
    name(str);
    puts(str);
    cout << "shubham " << str;

    return 0;
}