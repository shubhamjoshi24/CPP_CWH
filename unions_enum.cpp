#include <bits/stdc++.h>
using namespace std;

// Unions are similar to structures but they provide better memory management then structures. Unions use shared memory so only 1 variable can be used at a time.

union money
{
    int rice;
    char car;
    float pounds;
} m1;

// As shown in Code Snippet 5. we have created a union with the name "money" in which we have declared three variables of different data types (rice, car, pound). The main thing to note here is that:-
// • We can only use I variable at a time otherwise the compiler will give us a garbage value
// • The compiler chooses the data type which has maximum memory for the allocation.

int main()
{
    // union money m1;
    // m1.car = 'a';
    m1.rice = 543;
    // m1.pounds = 50.93;

    // At 1st we have created a union variable "ml" of type "money", 2nd we have assigned values to (rice) fields of the union money, and in the end, we have printed the value of "rice". The main thing to note here is that once we have assigned a value to the union field "rice", now we cannot use other fields of the union otherwise we will get garbage value.

    cout << m1.rice << endl;
    // cout << m1.car << endl;
    // cout << m1.pounds << endl;

    // Enums are user-defined types which consist of named constants. Enums are used to make the program more readable.
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = lunch;
    cout << m1 << endl;

    // At 1st we have created an enum "meal" in which we have stored three named constants (breakfast lunch, dinner). 2nd we have assigned the value of "lunch" to the variable "ml" and at the end, we have printed "ml".The main thing to note here is that(breakfast, lunch, dinner) are constants; the value for "breakfast" is "0", the value for "lunch" is "1" and the value for "dinner" is "2".

    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    return 0;
}