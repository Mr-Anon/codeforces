#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int T;
    cin >> T;
    int n;
    float k;
    int m;
    for (int i = 0 ; i < T; ++i){
        cin >> n;
        cin >> k;
        
        m = n-k+k/2;
        cout << m << endl;
        for(int j = ceil(k/2) ; j <= n ; ++j){
            if(j == k){
                continue;
            }
            else{
                cout << j << " ";
            }
        }
        cout << endl;       

    }
}