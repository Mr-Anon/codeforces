#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, d;
    // cin >> t;
    // for (int i = 0 ; i < t; ++i){
    cin >> n;
    string s;
    cin >> s;
    // int ans = 0;
    int temp = 0;
    // int len = s.length();
    int flag = 0;
    for (int j = 0; j < n; ++j)
    {
        if (s[j] == '0')
        {
            ++temp;
        }
        if (s[j] == '1')
        {
            flag = 1;
        }
    }
    string ss[temp + 1];
    for (int i = 0; i <= temp; ++i)
    {
        if (i == 0)
        {
            ss[i] = '1';
        }
        else
        {
            ss[i] = '0';
        }
    }

    if (flag == 1)
    {
        for (int i = 0; i <= temp; ++i)
        {
            cout << ss[i];
        }
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            cout << s[i] ;
        }
    }
    cout << endl;
}