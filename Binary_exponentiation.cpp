#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
int powerFunc(int a , int n)
{

    int res = 1;
    while(n)
    {
        if(!(n & 1))
        {
            n = n / 2;
            a = ((a%mod)*(a%mod))%mod;
        }
        else
        {
            n--;
            res = ((res%mod) *( a %mod))%mod;
        }

    }
    return res%mod;

}

int main()
{

    int a,n;
    cin>>a>>n;
    cout<<powerFunc(a,n)<<"\n";
    return 0;
}
