#include <iostream>
#include <cmath>
using namespace std;


int main(){
    long long t;
    long long k;
    cin >> k;
    long long n;
    long long x;
    for (long long i = 0 ; i < k; ++i){
        cin >> n;
        cin >> x;
        cin >> t;
        long long no = n;
        long long count = 1;
        long long ans = 0;
        long long act = 1;
        --n;
        while(act){
            if(count % x == 0 && n!=0){
                --n;
                ++act;
            }
            if(count % t == 0){
                --act;
                ans +=act;

            }



            ++count;
        }  
        cout<<ans<<endl;

    }
}