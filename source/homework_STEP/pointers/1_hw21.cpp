#include <iostream>
#include <time.h>
using namespace std;

const int SIZE = 10;

int main()
{
    srand(time(0));
    int array[SIZE];
    int* parray = array;
    int sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        array[i] = rand() % 10;
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        if (i % 2 == 0)
        {
            sum += *(parray + i);
        }
    }

    cout << "The amount = " << sum << endl;

    return 0;
}
