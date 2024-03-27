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
        long int n, div;
        cin >> n;
        if(n%3==0){
            cout << n/3 << " " << n/3 << nl;
        }
        else{
            div = n/3;
            if((div*1 + (div+1)*2) == n){
                cout << div << " " << div+1 << nl;
            }
            else{
                cout << div+1 << " " << div << nl;
            }
        }
    }

    return 0;
}