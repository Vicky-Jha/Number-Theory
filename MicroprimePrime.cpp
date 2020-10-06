#include <bits/stdc++.h>
#define lli long long int
#define MAX 1000001
using namespace std;
//VJ's Code
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	int t,l,r;
	cin>>t;
	
	bitset<MAX> IsPrime;
	IsPrime[1] = 1; //0 then prime // 1 then non prime
	
	for ( int i = 2 ; i*i <= (MAX) ; ++ i)
		if(!IsPrime[i])
			for ( int j = i*i ; j <= MAX ; j += i)
				IsPrime[j] = 1;
				
	vector<int> primePrime;
	
	int cummulativeSum = 0;
	
	for ( int i = 1 ; i < MAX ; ++ i)
	{
		if(!IsPrime[i])
			cummulativeSum += 1;
		if(!IsPrime[cummulativeSum])
				primePrime.push_back(i);
	}
	while(t --)
	{
		cin>>l>>r;
		int pos ;
		
		auto it = lower_bound(primePrime.begin(), primePrime.end(), l);
		if(it != primePrime.end())
			pos = it - primePrime.begin();
		else
			continue;
	
		auto itr = lower_bound(primePrime.begin(), primePrime.end(), r);
		if(*itr != r)
			itr --;
		if(itr != primePrime.end())
			cout<<(itr - primePrime.begin()) - pos + 1<<"\n";
		else
			continue;
	}
	
 
    return 0;
}
