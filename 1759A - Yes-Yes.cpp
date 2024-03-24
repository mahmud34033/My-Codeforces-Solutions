#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <numeric>
#define ll long long
#define nl endl
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        int flag=0;
        if(s.size() > 1){
            for(int i=0; i<s.size()-1; i++){
                bool a = s[i] == 'Y' && s[i+1] == 'e';
                bool b = s[i] == 'e' && s[i+1] == 's';
                bool c = s[i] == 's' && s[i+1] == 'Y';
                if(a || b || c){
                    continue;
                }
                else{
                    flag++;
                    break;
                }
            }
        }
        else if(s.size() == 1 && (s=="Y" || s=="e" || s=="s")){
            flag=0;
        }
        else{
            flag++;
        }
        
        if(flag==0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
