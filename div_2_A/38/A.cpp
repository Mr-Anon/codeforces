#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{


    set<char, greater<char> > s1;
 
    // insert elements in random order
    s1.insert("40");
    s1.insert("30");
    s1.insert("60");
    s1.insert("20");
    s1.insert("50");
     
    // only one 50 will be added to the set
    s1.insert("50");
    s1.insert("10");
 
    // printing set s1
    set<char, greater<char> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr<<" ";
    }
    // int t, n, d;
    // // cin >> t;
    // cin >> n;
    // string s;
    // long long a, ans = 0;
    // cin >> s;
    // for(int i = 0; i < n; ++i){
    //     if()
    // }

    // cout << ans << endl;
}