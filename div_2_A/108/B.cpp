#include <iostream>

using namespace std;



int main(){
    int t;
    int n,m,k;
    cin >> t;
    for (int i = 0 ; i < t; ++i){
        cin >> n >> m >> k;
        if((n*m-1) == k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
            
    }
}