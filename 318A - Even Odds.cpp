#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <climits>
#define ll long long int
#define nl endl
#define test() \
    int t;     \
    cin >> t;  \
    while (t--)
#define forn(i, n) for (int i = 0; i < n; i++)
using namespace std;

// EOF while(cin >> a >> b >> c){}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, mod, codd;
    cin >> n >> k;
    mod = n%2;
    codd=n/2;

    if(mod!=0) ++codd;

    if(k <= codd){
        cout << (k*2)-1;
    }
    else{
        cout << (k-codd)*2;
    }

    return 0;
}
