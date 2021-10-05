#include <iostream>
#include <cmath>
using namespace std;


int main(){
  
    long long n,x =2;
    cin >> n;
    // cout << x << " ";
    for (long long i = 2 ; i < n; ++i){
        cout << x << " ";
        x = (x+i)%n;
        if(x == 0){
            x = n;
        }
            }
        cout << x;
    return 0;
}