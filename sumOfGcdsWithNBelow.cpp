//Find sum of all numbers with Gcd N from 1 ex N=10, gcd(1,10)+gcd(2,10)+...+gcd(n,n)
//1 <= n <= 2000
//how Euler's Totient Function can be used to evaluate GCD sum in an efficient way.
#include <bits/stdc++.h>
#define lli long long int
#define MAXN 1000000
using namespace std;
int phi[MAXN + 1];

void phi_1_to_n(int n) {
    
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;
       
    for(int i=2 ; i<=n  ; ++i)
    if(phi[i] == i)
    {
		for(int j=i ; j <= n ; j += i)
		phi[j] -= phi[j]/i;
	}
	

    
}
lli sumOfGcds(lli n)
{
	lli res =0;
	for(int i= 1 ; i*i<=n ; ++i)
	if(!(n % i))
	{
		lli d1 = i;
		lli d2 = n / i;
		res += d1*phi[n/d1];
		res += d2*phi[n/d2];
	}
	return res;
	
}
int main()
{
	phi_1_to_n(MAXN);
	lli n,t;
	scanf("%lld",&t);
	while(t--)
	{
	scanf("%lld",&n);
	printf("%lld\n",sumOfGcds(n));
	}

    return 0;
}

//Explanation

//1. GCD(A,B) = C // GCD(A/C,B/C) = 1
