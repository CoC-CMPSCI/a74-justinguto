#include <iostream>
#include <iomanip>
#include "main.hpp"
using namespace std;

const int SIZE = 100;

void printout(int number[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << setw(5) << number[i];
    }

    cout << endl;
}

int main()
{
    int number[SIZE] = {12, 15, 19, 21, 25, 27, 29, 33, 37, 43};
    int length = 10;
    int usernum;

    cout << "Enter the number to insert" << endl;

    if (!(cin >> usernum))
    {
        usernum = 22;
    }

    printout(number, length);

    insertone(number, length, usernum);

    printout(number, length);

    cout << "Enter the number to delete" << endl;

    if (!(cin >> usernum))
    {
        usernum = 19;
    }

    deleteone(number, length, usernum);

    printout(number, length);

    return 0;
}
