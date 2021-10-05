#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{


    int d,t, n, ans = 0;
    cin >> n;
    cin >> t;
    cin >> d;
    int arr[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }
  
    for(int i = 0 ; i < n-t ; ++i){
        ans += arr[i];
    }

    ans += (t*d);

    cout << ans << endl;
}