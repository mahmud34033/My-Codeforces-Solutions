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

    long int n;
    cin >> n;
    long int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int store=0, cnt=0;
    for(int i = 0; i < n-1; i++){
        if(a[i] <= a[i+1]){
            ++cnt;
            if(cnt > store){
                store = cnt;
            }
        }
        else{
            cnt = 0;
        }
    }

    cout << ++store << nl;

    return 0;
}
