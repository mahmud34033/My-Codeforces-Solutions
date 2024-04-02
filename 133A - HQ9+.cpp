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
    
    string s;
    cin >> s;
    
    bool a = s.find('H')!=string::npos;
    bool b = s.find('Q')!=string::npos;
    bool c = s.find('9')!=string::npos;

    if(a || b || c) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}
