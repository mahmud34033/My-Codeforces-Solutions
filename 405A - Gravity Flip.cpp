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
    
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for(int i=0; i<n; i++) cout << a[i] << " ";
    return 0;
}
