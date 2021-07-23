#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string s;
    int m;
    for (int i = 0; i < T; ++i)
    {
        cin >> s;
        int len = s.length();
        int count = 0;
       
        for (int j = len - 1; j >= 0; --j)
        {
            if (s[j] == 'a')
            {
                count += 1;
            }
        }

        if (count == len)
        {
            cout << "NO" << endl;
        }
        else if (count == 0)
        {
            cout << "YES" << endl;
            s += 'a';
            cout << s << endl;
        }

        else
        {
            string ss;
            int a;
            cout << "YES" << endl;
            for(int k=0; k < len-1 ; ++k ){
                if(s[k] == 'a' and s[len-k-1] == 'a'){
                    continue;
                }
                else if(s[k] == 'a' and s[len-k-1] != 'a'){
                    a = k;
                    
                    break;
                }
                else if(s[k] != 'a' and s[len-k-1] == 'a'){
                    a = len-k-1;
                    break;
                }

            }
            int flag = 0;
            if (a < len/2){
                ss+='a';
                ss+=s;
            }
            else{
                ss+=s;
                ss+='a';
            }

            
            cout << ss << endl;
        }
    }
}