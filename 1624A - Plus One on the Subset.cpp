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
        ll a[n], minn, maxx;
        for(int i = 0; i < n; i++) cin >> a[i];
        minn = *min_element(a, a+n);
        maxx = *max_element(a, a+n);
        cout << maxx-minn << nl;
    }

    return 0;
}
