#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    long long int t, n,m;
    // cin >> t;
    // for (int i = 0; i < t; ++i)
    // {
    cin >> n >> m;
    long long int a[n], b[m];
    for(int i = 0 ; i < n ; ++i){
      cin >> a[i];
    }
    for(int i = 0 ; i < m ; ++i){
      cin >> b[i];
    }
    int ans = 0;
    for(int i = 0 ; i < n ; ++i){
      if(b[ans] >= a[i]){
        ++ans;
      }
    }
    if (ans > m){
      ans = m;
    }

    
    cout << ans << endl;
    
  // }
}