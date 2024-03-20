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
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        set<int> sa(a, a+n);
        int distinct = sa.size();
        while(n>distinct) n-=2;
        cout << n << nl;
    }

    return 0;
}
