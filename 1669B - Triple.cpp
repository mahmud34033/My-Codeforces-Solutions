#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <climits>
#define ll long long int
#define nl "\n"
#define test() \
    int t;     \
    cin >> t;  \
    while (t--)
#define forn(i, n) for (int i = 0; i < n; i++)
using namespace std;

// EOF: while(cin >> a >> b >> c){}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test(){
        ll n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        if(n < 3){
            cout << -1 << nl;
            continue;
        }
        sort(a, a+n);
        ll triple = 0;
        for(int i = 0; i < n-2; i++){
            if(a[i] == a[i+1] && a[i+1] == a[i+2]){
                triple = a[i];
                break;
            }
        }
        if(triple == 0){
            cout << -1 << nl;
        }
        else{
            cout << triple << nl;
        }
    }

    return 0;
}