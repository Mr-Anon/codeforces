#include <iostream>

using namespace std;


int main(){
    int t;
    int n,k1,k2,w,b;
    cin >> t;
    for (int i = 0 ; i < t; ++i){
        cin >> n >> k1 >> k2 >> w >>b;
        int max_w = (int)((k1+k2)/2);
        int max_b = (int)((2*n-(k1+k2))/2);
        if(w <= max_w && b <= max_b){
            cout << "YES"<< endl;
        }
        else{
            cout << "NO" << endl;
        }
               
    }
    return 0;
}