#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <numeric>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int minn = *min_element(a, a+n);
        int sum=0;
        sum = accumulate(a, a+n, sum);
        sum = sum-(minn*n);
        cout << sum << endl;
    }

    return 0;
}
