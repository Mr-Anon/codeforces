#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,n,d;
    cin >> t;
    for (int i = 0 ; i < t; ++i){
        cin >> n >> d;
        int k[n];
        int flag = 1;
        for (int j = 0; j < n ; ++j){
                cin >> k[j];
                if( k[j] > d){
                    flag =0;
                }
        }

        sort(k,k+n);

        int min_sum;
        if( n == 1){
            min_sum = k[0];
        }
        else{
            min_sum = k[0] + k[1];
        }
        if (min_sum <= d || flag){
            cout << "YES" << endl;
        }
        else{
            
            cout  << "NO" << endl;
        }
        
               
    }
}