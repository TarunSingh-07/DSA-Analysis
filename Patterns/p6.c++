#include <bits/stdc++.h>
using namespace std;
void print6(int n)
{
    // Method 2 by myself

    //  for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print6(n);
    }
}