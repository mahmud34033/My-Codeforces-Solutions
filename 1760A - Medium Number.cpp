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
        vector<int> a(3);
        for(int i=0;i<3;i++) cin >> a[i];
        sort(a.begin(), a.end());
        cout << a[1] << nl;
    }

    return 0;
}