#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    long long int t, s,a,b,c;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
    cin >> s >> a >> b >> c;

    
    cout << (long long int)(s/(a*c))*(a+b) + (long long int)((s%(a*c))/(c)) << endl;
    
  }
}