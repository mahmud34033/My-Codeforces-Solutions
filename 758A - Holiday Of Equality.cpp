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
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    int maxx = *max_element(a, a+n);
    int sum=0;
    for(int i=0; i<n; i++){
        if(a[i] == maxx) continue;
        sum+=maxx-a[i];
    }
    cout << sum <<nl;

    return 0;
}