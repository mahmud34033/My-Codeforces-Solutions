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

void insertionsort(int a[], int s){
    for(int i = 1; i < s; i++){
        int value = a[i];
        int index = i;
        while(index > 0 && a[index-1] > value){
            a[index] = a[index-1];
            index--;
        }
        a[index] = value;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++) cin >> a[i];

    insertionsort(a, m);

    int min = INT_MAX;
    for(int i = 0, j = n-1; j < m; i++, j++){
        int diff = a[j]-a[i];
        if(diff < min) min = diff;
    }    

    cout << min << nl;

    return 0;
}
