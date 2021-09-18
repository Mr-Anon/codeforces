#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, d;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        long arr[n];
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[j];
        }
        if (arr[0] + arr[1] <= arr[n - 1])
        {
            cout << "1 2 " << n << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}