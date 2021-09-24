#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t,  n;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
    cin >> n;
    string s;
    cin >> s;
    int flag = 0; 
    for(int j = 0; j < n-11; ++j){
        if(s[j] == '8'){
            flag = 1;
        }
    }
    if(s[n-11] == '8'){
            flag = 1;
        }
    if( flag == 0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
   
    }
}