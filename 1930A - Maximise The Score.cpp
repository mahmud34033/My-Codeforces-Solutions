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
        ll a[2*n];
        for(int i = 0; i < 2*n; i++) cin >> a[i];
        sort(a, a+2*n);
        ll sum = 0;
        for(int i = 0; i < 2*n; i+=2) sum += min(a[i], a[i+1]);
        cout << sum << nl;
    }

    return 0;
}