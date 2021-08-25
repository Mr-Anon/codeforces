#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    int k[4];
    cin >> t;
    for (int i = 0 ; i < t; ++i){
        
        for (int j = 0; j < 4 ; ++j){
                cin >> k[j];
                
        }

        sort(k,k+4);  
        cout  << (int)(k[0]*k[2]) << endl;
        
        
               
    }
}