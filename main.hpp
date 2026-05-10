#include <iostream>
#include <iomanip>
using namespace std;

void insertone(int number[], int &length, int usernum)
{
    int index = 0;

    while (index < length && number[index] <= usernum)
    {
        index++;
    }

    for (int i = length; i > index; i--)
    {
        number[i] = number[i - 1];
    }

    number[index] = usernum;
    length++;
}

void deleteone(int number[], int &length, int usernum)
{
    int index = -1;

    for (int i = 0; i < length; i++)
    {
        if (number[i] == usernum)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        return;
    }

    for (int i = index; i < length - 1; i++)
    {
        number[i] = number[i + 1];
    }

    length--;
    number[length] = 0;
}
