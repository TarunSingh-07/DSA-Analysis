#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, num[i]);

        // Alternative way to find maximum value
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    // return max value
    return maxi;
}
int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        mini = min(mini, num[i]);

        // Alternative way to find minimum value
        // if(num[i] < min){
        //     min = num[i];
        // }
    }
    // return min value
    return mini;
}

int main()
{
    int size;
    cout << "Enter the size of Array : ";
    cin >> size;

    int num[100];
    cout << "Enter elements of array : " << endl;
    for (int i = 0; i < size; i++)
    {

        cin >> num[i];
    }
    cout << "Maximum value is: " << getMax(num, size) << endl;
    cout << "Minimum value is: " << getMin(num, size) << endl;

    return 0;
}
