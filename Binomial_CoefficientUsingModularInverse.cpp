#include <bits/stdc++.h> 
#define MAXN 1000
using namespace std; 
int factorial[MAXN+1];
//Useful when finding combination of large numbers 
unsigned long long power(unsigned long long a, 
						int n, int mod) 
{ 
	unsigned long long int res = 1;
	while(n)
		if(!(n & 1))
		n /= 2, a = (a*a)%mod;
		else
		n--, res = (res*a)%mod;
	return res;
} 

unsigned long long modInverse(unsigned long long n, int p) 
{ 
	return power(n, p - 2, p); 
} 

unsigned long long nCrModPFermat(unsigned long long n, 
								int r, int p) 
{ 

	if (r == 0) 
		return 1; 

	return (factorial[n] * modInverse(factorial[r], p) % p * modInverse(factorial[n - r], p) % p) % p; 
} 

//nCr % p = (factorial[n]* modIverse(factorial[r]) % p *
               //modIverse(factorial[n-r]) % p) % p;
int main() 
{ 
	
	int n = 10, r = 2, p = 13; 
	factorial[0] = 1;
	for (int i = 1; i <= MAXN; i++) {
    factorial[i] = factorial[i - 1] * i % p;
	}
	cout << "Value of nCr % p is "
		<< nCrModPFermat(n, r, p)<<"\n"; 
	return 0; 
} 
//Here p must always be prime number 
//coz modular inverse exits if 2 numbers are coprime
