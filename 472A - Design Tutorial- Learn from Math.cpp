#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <numeric>
#define ll long long
#define nl endl
using namespace std;

int is_prime(int n)
{
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }
    else
    {
        for (int i = 5; i < sqrt(n) + 1; i++)
        {
            if (n % i == 0)
                return 0;
        }
    }
    return 1;
}

int main()
{
    
    int n, i=1;
    cin >> n;
    while (true)
    {
        bool a = is_prime(i);
        bool b = is_prime(n-i);
        if(a==0 && b==0) break;
        ++i;
    }
    cout << i << " " << n-i;

    return 0;
}
