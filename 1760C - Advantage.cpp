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
        int n;
        cin >> n;
        int a[n];
        for(int i =0; i<n; i++) {
            cin >> a[i];
        }

        int max1, max2;
        max1=max2=INT_MIN;

        for(int i=0; i<n; i++){
            if(a[i] > max1){
                max2=max1;
                max1=a[i];
            }
            else if(a[i] > max2){
                max2=a[i];
            }
        }

        for(int i=0; i<n; i++){
            if(a[i] == max1){
                cout << a[i]-max2 << " ";
                continue;
            }
            cout << a[i]-max1 << " ";
        }
        cout << nl;
    }

    return 0;
}
