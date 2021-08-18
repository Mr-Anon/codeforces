#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int t;
    int k;
    cin >> t;
    for (int i = 0 ; i < t; ++i){
        cin >> k;
        cout << long(ceil(sqrt(k))) <<endl;       
    }
}