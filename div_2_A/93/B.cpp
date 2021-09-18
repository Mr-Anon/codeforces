#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, d;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        // cin >> n;
        string s;
        cin >> s;
        // cout << s << endl;
        int len = s.length();
        // cout << len << endl;
        int arr[len];
        int count = 0;
        int k=0;
        for (int j = 0; j < len; ++j)
        {
            if (s[j] == '1')
            {
                ++count;
            }
            if(s[j] == '0' && count != 0)
            {
                arr[k]=count;
                count = 0;
                ++k;
            }
        }
        if(count != 0)
            {
                arr[k]=count;
                count = 0;
                ++k;
            }

        // cout << k << endl;
        sort(arr,arr+k,greater<int>());
        int ans=0;
        // for(int j = 0; j < k; j+=1){
        //     cout << arr[j] << endl;
        // }
        for(int j = 0; j < k; j+=1){
            ans += arr[j];
            j++;
        }
        cout << ans << endl;
    }
}