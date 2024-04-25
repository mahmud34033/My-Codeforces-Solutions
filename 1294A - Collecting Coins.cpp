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
        ll a[3];
        for(int i = 0; i < 3; i++) cin >> a[i];
        ll n;
        cin >> n;

        sort(a, a + 3);
        ll diff = (a[2] - a[0]) + (a[2] - a[1]);

        if(diff <= n && (n-diff)%3==0){
            cout << "YES" << nl;
        }
        else {
            cout << "NO" << nl;
        }
    }

    return 0;
}