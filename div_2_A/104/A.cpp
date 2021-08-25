#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,n;
    cin >> t;
    for (int i = 0 ; i < t; ++i){
        cin >> n;
        int k[n];
        for (int j = 0; j < n ; ++j){
                cin >> k[j];
        }

        sort(k,k+n);
        int count = 0;
        for (int j = 0; j < n ; ++j){
                if(k[0] == k[j]){
                    ++count;
                }
        }
        cout << (int)(n - count) << endl;
        
               
    }
}