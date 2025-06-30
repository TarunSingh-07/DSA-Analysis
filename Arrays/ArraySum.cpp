#include<bits/stdc++.h>
using namespace std;

void sum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of all array elements is : " << sum <<endl;
    
}

int main(){
    int size;
    cout << "Enter size of an array : " ;
    cin >> size;

    int arr[size];
    
    cout << "Enter elements of an array : " << endl;

    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }

    sum(arr, size);
}