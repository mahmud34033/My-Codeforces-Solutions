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
    int value=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        value+=a[i];
    }

    int bag=0, count=0;
    int min, diff, index;
    while (bag <= value)
    {
        min = INT_MAX;
        for(int i=0; i<n; i++){
            diff = value-a[i];
            if(diff < min){
                min=diff;
                index=i;
            }
        }
        bag+=a[index];
        ++count;
        value-=a[index];
        a[index] = 0;
    }

    cout << count << nl;
    
    return 0;
}
