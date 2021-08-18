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
    int t;
    int k[4];
    cin >> t;
    for (int i = 0 ; i < t; ++i){
        for (int j = 0; j < 4 ; ++j){
                cin >> k[j];
        }
        if( min(k[2],k[3]) < max(k[0],k[1]) && min(k[0],k[1]) < max(k[2],k[3])){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
               
    }
}