#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, d;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        for (int j = n; j > 0; --j)
        {
            for (int k = 0; k < j; ++k)
            {
                cout << "(";
            }
            for (int k = 0; k < j; ++k)
            {
                cout << ")";
            }
            for (int k = n; k > j; --k)
            {
                cout << "(";
                cout << ")";
            }
            
            cout << endl;
        }
    }
}