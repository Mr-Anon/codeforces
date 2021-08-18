#include <iostream>

using namespace std;

int min(int a, int b){
    if( a < b)
    return a;
    return b;
}

int man(int a, int b){
    if( a > b)
    return a;
    return b;
}

int main(){
    long t;
    long n,r;
    cin >> t;
    long count;
    for (long i = 0 ; i < t; ++i){
        count = 0;
        cin >> n;
        for(long j = 0 ;  j < n; ++j){
            cin >> r;
            if (r == 1 || r == 3 ){
                ++count;
            }
        }
        cout << count << endl;
       
               
    }
}