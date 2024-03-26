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
        long int x, y, n, rem, res;
        cin >> x >> y >> n;
        if(n%x==y){
            cout << n << nl;
        }
        else{
            rem = n%x;
            if(rem > y) res = n-(rem-y);
            else res = n-(rem+x-y);
            cout << res << nl;
        }
    }

    return 0;
}