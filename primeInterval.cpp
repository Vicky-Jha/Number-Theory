#include <bits/stdc++.h>
#define lli long long int
#define MAX 10001
using namespace std;
 
 
 
//#include <bits/stdc++.h>
//using namespace std;
//bool isPrime(int n)
//{
    //if(n == 1)
    //return false;
    //for(int i=2 ; i*i<=n ; ++i)
        //if(n%i == 0)
            //return false;
    
    //return true;
//}
//int main()
//{
    //int L,R;
    //cin>>L>>R;
    //for(int i = L ; i<=R; ++i)
        //if(isPrime(i))
            //cout<<i<<" ";
    //return 0;
//} 
 
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
	bitset<MAX> IsPrime;
	IsPrime[1] = 1;
	vector<int> primes;
	int L,R;
	cin>>L>>R;
	for ( int i = 2 ; i*i <= R ; ++ i)
	{
		for ( int j = i*i ; j <= R ; j += i)
		{
			if (!IsPrime[j])
				IsPrime[j] = 1;
		}
	}
 
	for ( int i = 1 ; i <= R ; ++ i)
		if (!IsPrime[i])
			primes.emplace_back(i);
 
	if(binary_search(primes.begin(), primes.end(), L))
	{
		auto it = lower_bound(primes.begin(), primes.end(), L);
		int pos = it - primes.begin();
 
		for ( int i = pos ; i < primes.size() ; ++ i)
			cout<<primes[i]<<" ";
	}
	else
	{
		auto it = upper_bound(primes.begin(), primes.end(), L);
		if(it != primes.end())
		{
			int pos = it - primes.begin();
			for ( int i = pos ; i < primes.size() ; ++ i)
				cout<<primes[i]<<" ";
		}
	}
 
	
    return 0;
}
