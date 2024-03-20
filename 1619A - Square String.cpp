#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int slen = s.length();
        if(slen%2 == 0){
            int mid = slen/2;
            string sub1 = s.substr(0, mid);
            string sub2 = s.substr(mid);
            if(sub1 == sub2) cout << "YES\n";
            else cout << "NO\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
