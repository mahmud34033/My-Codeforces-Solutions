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
        string row[8], col[8];

        for(int i = 0; i < 8; i++){
            cin >> row[i];
        }

        int r = 0;
        for(int i = 0; i < 8; i++){
            if(row[i] == "RRRRRRRR"){
                r=1;
                break;
            }
        }

        if(r==1) cout << 'R' << nl;
        else cout << 'B' << nl;
    }

    return 0;
}