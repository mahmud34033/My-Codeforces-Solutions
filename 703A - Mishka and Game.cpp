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

    int n;
    cin >> n;
    int m, c, cntm=0, cntc=0;
    for(int i=0; i<n; i++){
        cin >> m >> c;
        if(m>c) ++cntm;
        else if(m<c) ++cntc;
    }
    if(cntm>cntc) cout << "Mishka\n";
    else if(cntm<cntc) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";

    return 0;
}