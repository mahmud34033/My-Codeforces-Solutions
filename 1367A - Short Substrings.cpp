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
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1;
        for(int i=0; i<s1.size(); i+=2){
            s2.push_back(s1[i]);
        }
        if(s1.size()%2==0) s2.push_back(s1[s1.size()-1]);
        cout << s2 << nl;
    }

    return 0;
}
