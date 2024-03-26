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
        long int n;
        cin >> n;
        long int a=0,temp=0;
        for(int i = 0; i < 10; i++){
            temp=n-pow(10,i);
            if(temp<0) break;
            a=temp;
        }
        cout << a << nl;
    }

    return 0;
}