#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t, n, a, b, x, d;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n-1; ++i)
    {
        cin >> arr[i];
    }
    cin >> a;
    cin >> b;
    long ans = 0;
    for (int i = a; i < b; ++i)
    {
        ans += arr[i - 1];
    }
    cout << ans << endl;
}