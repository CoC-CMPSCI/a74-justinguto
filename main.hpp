#ifndef MAIN_HPP
#define MAIN_HPP

// Array insertion / deletion in a sorted array

#include <iostream>
#include <iomanip>
using namespace std;

void insertone(int[], int &, int);
void deleteone(int[], int &, int);
void printout(int[], int);

void insertone(int number[], int &length, int usernum)
{
    // TODO: insert usernum into the sorted array, then increment length
    int pos, i;
    for (i = 0; i < length; i++)
        if (number[i] > usernum)
            break;
    pos = i;
    for (i = length - 1; i >= pos; i--)
        number[i + 1] = number[i];
    number[pos] = usernum;
    length += 1;
}

void deleteone(int number[], int &length, int usernum)
{
    // TODO: find usernum, shift remaining elements left, decrement length
    int pos = length, i;
    for (i = 0; i < length; i++)
    {
        if (number[i] == usernum)
        {
            pos = i;
            break;
        }
    }
    if (pos == length) return;  // not found
    for (i = pos; i < length - 1; i++)
        number[i] = number[i + 1];
    number[length - 1] = 0;
    length -= 1;
}

void printout(int number[], int last)
{
    for (int i = 0; i < last; i++)
        cout << setw(5) << number[i];
    cout << endl;
}

#endif
