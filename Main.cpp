#include <iostream>
using namespace std;

int main()
{
    int i;
    int size;

    cout << "Enter the size of two arrays: ";
    cin >> size;

    int* origList = new int[size];
    int* offsetAmount = new int[size];

    cout << "\nEnter the numbers of 'OrigList': " << "\n";

    for (i = 0; i < size; i++)
    {
        cin >> origList[i];
    }

    cout << "\nOrigList: ";

    for (i = 0; i < size; i++)
    {
        cout << origList[i] << ' ';
    }

    cout << "\n\nEnter the numbers of 'OffsetAmount': " << "\n";

    for (i = 0; i < size; i++)
    {
        cin >> offsetAmount[i];
    }

    cout << "\nOffsetAmount: ";

    for (i = 0; i < size; i++)
    {
        cout << offsetAmount[i] << ' ';
    }

    cout << "\n\nSum: ";

    for (i = 0; i < size; i++)
    {
        cout << origList[i] + offsetAmount[i] << ' ';
    }

    cout << "\n";

    return 0;
}