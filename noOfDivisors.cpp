#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli nofDivisors(lli n)
{
	lli cnt=0,res=1;
	for(lli i=2 ; i*i<=n ; ++i)
	{	
		cnt = 0;
		if(!(n % i))
		{
			while(!(n % i))
			cnt++,n /= i;
			
		res *= (cnt+1);
		}
	}
	
	if(n > 1)
		res *= 2;
	return res;
}
int main()
{
	lli n;
	scanf("%lld",&n);
	printf("%lld\n",nofDivisors(n));
	
    return 0;
}

// if prime factorization of n is p1^e1, p2^e2 ... then no of divisors is (e1+1)*(e2+1)
