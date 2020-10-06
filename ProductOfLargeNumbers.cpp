#include <bits/stdc++.h>
#define lli long long int
const int MOD = 1e9 + 7;
using namespace std;

long long prod(long long a, long long b, long long mod = MOD)
{
    long long res = 0;

    while(b)
    {
        if(b & 1)
        {
            res = (res + a) % mod;
            b --;
		}
        else
        {
			a = (a + a) % mod;
			b /= 2;
		}
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cout<<prod(28,3)<<"\n";
    
    return 0;
}
