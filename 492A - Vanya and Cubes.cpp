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
    int i, sum = 0, temp = 0;
    for (i = 1; sum <= n; ++i)
    {
        temp += i;
        sum += temp;
    }
    cout << i-2 << nl;

    return 0;
}
