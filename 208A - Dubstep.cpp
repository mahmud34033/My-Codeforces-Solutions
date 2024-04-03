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

    string myString;
    cin >> myString;
    string search = "WUB";
    string replace = " ";
    for (int i = myString.find(search); i >= 0; i = myString.find(search))
        myString.replace(i, search.size(), replace);

    string s1;
    int flag=0, p=1;
    for(int i = 0; i < myString.size(); i++){
        if(myString[i] >= 'A' && myString[i] <= 'Z'){
            s1+=myString[i];
            flag++;
        }
        if(flag>0 && myString[i] == ' '){
            p++;
            if(p!=1) s1+=' ';
            flag=0;
        }
    }

    cout << s1;

    return 0;
}
