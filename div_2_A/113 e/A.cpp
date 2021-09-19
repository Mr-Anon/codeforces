#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,n,d;
    cin >> t;
    for (int i = 0 ; i < t; ++i){
    cin >> n;
    string s;
    cin >> s;
    int ans = -1;
    for(int j = 0 ; j < n-1; ++j){
        if(s[j] == 'a' && s[j+1] == 'b'){
            ans = j;
            break;
        }
        if(s[j] == 'b' && s[j+1] == 'a'){
            ans = j;
            break;            
        }
        
    }
    if (ans == -1){
        cout << "-1 -1" << endl;
    }
    else{
    cout << ans+1 << " " << ans+2 << endl; 
    }
        
               
    }
}
