#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{


    int flag = 0,t, n, ans = 0;
    cin >> n;
    cin >> t;
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }
  
    for(int i = 0 ; i < n ; ++i){
        t -= (86400 - arr[i]);
        if ( t <= 0 ){
            cout << (i+1) << endl;
            break;
        }
    }

    // cout << ans << endl;
}