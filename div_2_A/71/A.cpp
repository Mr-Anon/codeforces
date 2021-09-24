#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t, b, p, f, h,c;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
    cin >> b >> p >> f >> h >> c;
    int ans = 0;
    while(b > 1){
        if(c >= h && f != 0){
            --f;
            ans += c;
            
        } else if(p!=0){
            --p;
            ans += h;

        } else if (f !=0){
            --f;
            ans += c;
            
        }
            b-=2;
       
    }
    cout << ans << endl;
    }
}