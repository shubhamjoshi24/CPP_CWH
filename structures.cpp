#include <bits/stdc++.h>
using namespace std;

struct student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
} harry, ravi, shubham;

// struct student harry, ravi, shubham;
// student harry, ravi, shubham;

void print()
{
    cout << harry.name << endl;
}

int main()
{
    // struct student harry, ravi, shubham;
    // student harry, ravi, shubham;

    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 100;
    ravi.marks = 90;
    shubham.marks = 96;
    harry.fav_char = 'a';
    ravi.fav_char = 'b';
    shubham.fav_char = 's';

    strcpy(harry.name, "harry potter student of the  year");

    cout << harry.name << endl;

    cout << "harry got " << harry.marks << " marks." << endl;
    cout << "ravi got " << ravi.marks << " marks." << endl;
    cout << "shubham got " << shubham.marks << " marks." << endl;

    cout << endl;

    cout << "harry id is " << harry.id << endl;
    cout << "ravi id is " << ravi.id << endl;
    cout << "shubham id is  " << shubham.id << endl;

    cout << endl;

    cout << "harry favorite character " << harry.fav_char << endl;
    cout << "ravi favorite character " << ravi.fav_char << endl;
    cout << "shubham favorite character " << shubham.fav_char << endl;

    print();

    cout << endl;

    return 0;
}