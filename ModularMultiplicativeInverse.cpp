#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli Power(lli a, lli n , lli mod)
{
	lli res = 1;
	while(n)
		if(!(n & 1))
		n /= 2, a = (a*a)%mod;
		else
		n--, res = (res*a)%mod;
	return res;
	
}
lli ModularMultiplicativeInverse(lli a, lli n)
{	
	return Power(a,n-2,n);
}

int main()
{
	lli a, n;
	scanf("%lld%lld",&a,&n);
	
	cout<<ModularMultiplicativeInverse(a,n)<<"\n";
	
    return 0;
}
//modular multiplicative inverse of a under modulus n
//Modular inverse of a under modulo n exist iff GCD(a,n) = 1 // coprime
//Little fermat's theorem states that if p is prime number then p ^ (n-1) = 1
//under mods(n) // = here is sign of modular congruency
