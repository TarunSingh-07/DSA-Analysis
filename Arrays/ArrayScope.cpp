#include <bits/stdc++.h>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the update function" << endl;

    arr[0] = 100;
    // Printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Going back to main function" << endl;
}

int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    // Printing the array after update
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}