#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing the array: " << endl;
    // Print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing DONE! " << endl;
}

int main()
{
    // declare
    int number[15];

    cout << "Value at 9 index: " << number[9] << endl;

    // cout << "Value at 20 index: " << number[20] << endl;

    // Initialize an array
    int second[3] = {5, 7, 11};
    // accessing an element
    cout << "Value at 2 index " << second[2] << endl;

    // Initialize an array
    int third[15] = {2, 7};
    int n = 15;
    printArray(third, n);

    int thirdSize = sizeof(third)/sizeof(int);
    cout << "Size of third array: " << thirdSize << endl;


    // Initialising all location with 0
    int fourth[10] = {0};
    n = 10;
    printArray(fourth, n);

    // Initialising all location with 1
    int fifth[20] = {1};
    fill_n(fifth, 20, 1);
    n = 20;
    printArray(fifth, n);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth array: " << fifthSize << endl;


    cout << "everything is fine " << endl;

    return 0;
}