#include <iostream>
#include <cmath>
using namespace std;


int main(){
    long long t;
    long long k;
    int statA = 0, statB = 0;
    int statLA = 0, statLB = 0;
    cin >> t;
    long long n;
    long long x;
    for (long long i = 0 ; i < t; ++i){
        cin >> n;
        cin >> x;
        cin >> k;
        if(n == 1)
        {          
                statA += x;
                statLA += k;
               
        }
        else{
            statB += x;
            statLB += k;
                
        }
       
    }
    if (statA >= statLA){
        cout << "LIVE" << endl;
    }
    else{
        cout << "DEAD" << endl;
    }
    if (statB >= statLB){
        cout << "LIVE" << endl;
    }
    else{
        cout << "DEAD" << endl;
    }
    return 0;
}