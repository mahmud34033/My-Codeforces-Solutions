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
    while(t--){
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int flag=0;
        for(int i = 0; i < n; i++){
            bool a = (s1[i]== 'R' && (s2[i] == 'G' || s2[i] == 'B'));
            bool b = (s2[i]== 'R' && (s1[i] == 'G' || s1[i] == 'B'));
            if (a || b){
                flag = 1;
                break;
            }
        }

        if(flag == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
