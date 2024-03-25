#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <climits>
#define ll long long int
#define nl endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt=0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'Q'){
                ++cnt;
            }else if(cnt > 0){
                --cnt;
            }
        }
        if(cnt <= 0) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}