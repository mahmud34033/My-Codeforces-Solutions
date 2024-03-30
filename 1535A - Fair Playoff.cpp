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
        int a[4];
        int max1, max2;
        max1=max2=INT_MIN;
        for(int i=0; i<4; i++){
            cin >> a[i];
            if(a[i] > max1){
                max2 = max1;
                max1 = a[i];
            }
            else if(a[i] > max2){
                max2 = a[i];
            }
        }
        int x = max(a[0],a[1]);
        int y = max(a[2],a[3]);
        if(max(x,y) == max1 && min(x,y) == max2){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
