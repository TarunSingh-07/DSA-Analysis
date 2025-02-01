#include<bits/stdc++.h>
using namespace std;
void print5(int n){
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <n-i+1 ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    // Method 2 by myself

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i ; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // Method 1 by myself

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = n; j >= i ; j--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
}
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        print5(n);
    }
    
}