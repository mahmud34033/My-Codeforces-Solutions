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

string odd_divisor(ll n){
    if(n%2!=0){
        return "YES\n";
    }

    while (n % 2 == 0)
    {
        n /= 2;
    }

    if(n > 1){
        return "YES\n";
    }
    else{
        return "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test(){
        ll n;
        cin >> n;
        cout << odd_divisor(n);
    }

    return 0;
}