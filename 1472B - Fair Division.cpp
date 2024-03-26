#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>
#include <climits>
#define forn(i,n) for(int i = 0; i < int(n); i++)
#define ll long long int
#define nl endl
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n, a, cnt1=0,cnt2=0, sum=0;
        cin >> n;
        forn(i,n) {
            cin >> a;
            sum+=a;
            if(a==1) ++cnt1;
            else ++cnt2;
        }
        if(((cnt1>0 && cnt1%2==0) || cnt2%2==0) && sum%2==0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}