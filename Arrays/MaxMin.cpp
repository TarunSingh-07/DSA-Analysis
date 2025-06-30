#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(num[i] > max){
            max = num[i];
        }
    }
    // return max value
    return max;
    
}
int getMin(int num[], int n){
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(num[i] < min){
            min = num[i];
        }
    }
    // return min value
    return min;
    
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
    cout << "Maximum value is: " << getMax(num, size) <<endl;
    cout << "Minimum value is: " << getMin(num, size) <<endl;

    return 0;
}
