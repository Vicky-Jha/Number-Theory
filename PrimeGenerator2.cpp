#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;

//VJ's Code
void init(int L, int R)
{
	vector<int> primes;
	int r = floor(sqrt(R));
	vector<bool> isPrime(floor(sqrt(R)) + 1);
	isPrime[1] = 1;
	for ( int i = 2 ; i*i <= r; ++ i)
		if(!isPrime[i])
			for ( int j = i*i ; j <= r ; j += i )
				isPrime[j] = 1;
				
	for ( int i = 1 ; i <= r ; ++ i )
		if(!isPrime[i])
			primes.push_back(i);
			
		
	bool f = 1; 
	if ( L <= r)
	{
		f = 0;
		for ( int i = 0; i < primes.size(); ++ i )
			if( primes[i] >= L )
				cout<<primes[i]<<"\n";
				
	}
	
	int l;
	if( !f )
	l = r + 1;
	else
	l = L;	
	
	vector<bool> isPrime2(R - l + 1);
		
	for ( int i = 0 ; i < primes.size() ; ++ i )
		for ( int j = l ; j <= R ; ++ j)
			if(!isPrime2[j - l])
				if(!(j % primes[i]))
					isPrime2[j - l] = 1;
 
	for ( int i = 0 ; i < isPrime2.size() ; ++ i )
		if ( !(isPrime2[i]) )
			cout<<i + l<<"\n";
		
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    
    long long int n,m;
    while ( t -- )
	{
		cin>>m>>n;
		init(m,n);
		cout<<"\n";
	}
 
 
    return 0;
}
 
