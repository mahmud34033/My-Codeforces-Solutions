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
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        sort(a, a+n);
        sort(b, b+n, greater<ll>());

        for(int i = 0; i < k; i++){
            if(a[i] < b[i]) swap(a[i], b[i]);
        }

        ll sum = 0;
        sum = accumulate(a, a+n, sum);
        cout << sum << nl;
    }

    return 0;
}