#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t, n, d;
    // cin >> t;
    // for (int i = 0; i < t; ++i)
    // {
    cin >> n;
    int sqn = sqrt(n) ;
    for (int j = sqn; j > 0; --j)
    {
        if (n % j == 0)
        {
            cout << 2 * ((int)(j) + int(n / j)) << endl;
            break;
        }
    }

    // }
}