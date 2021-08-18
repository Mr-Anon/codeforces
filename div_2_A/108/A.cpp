#include <iostream>

using namespace std;

long long min(long long a, long long b){
    if( a < b)
    return a;
    return b;
}

long long max(long long a, long long b){
    if( a > b)
    return a;
    return b;
}



int main(){
    long long t;
    long long n,m,d;
    cin >> t;
    for (long long i = 0 ; i < t; ++i){
        cin >> n >> m >> d;
        long long l = min(n,m);
        if ((l*d+l) >= max(n,m)){
            cout << "YES" << endl;
        }        
        else{
            cout << "NO" << endl;            
        }
            
    }
}