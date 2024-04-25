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

        ll sum = 0;
        for(int i = 0; i < n; i++) sum +=a[i];
        
        if(int(sqrt(sum)) == sqrt(sum)) cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}