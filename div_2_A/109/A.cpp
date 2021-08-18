#include <iostream>
#include <cmath>
using namespace std;


int hcf(int a, int b) {
   int i, hcf;


   for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }

   return hcf;
}



int main(){
    int t;
    int k;
    cin >> t;
    for (int i = 0 ; i < t; ++i){
        cin >> k;
        cout << long(100/(hcf(100,k))) <<endl;       
    }
}