
// 1<=N<=10^12
// 1<=Q<=5*10^5
// 1<=T<=3
// 1<=K<=10^12


#include <bits/stdc++.h>
#define lli unsigned long long int
using namespace std;
vector<lli> divisors;
void Divisors(lli n)
{
    for(lli i = 1 ; i*i <= n ; ++i)
    if(!(n % i))
    {
        divisors.push_back(i);
        divisors.push_back(n/i);
    }
    sort(divisors.begin(),divisors.end());
}
int main() {
	lli N,Q,T,K;
	scanf("%llu %llu ",&N,&Q);
	Divisors(N);
	map<lli , lli> mp;
	for(lli i = 2 ; i*i <= N ; ++i)
	if(!(N % i))
	{
		lli cnt = 0;
		while(!(N % i))
		cnt++,N /= i;
		mp.insert({i,cnt});
	}
	if(N > 1)
	mp.insert({N,1});

	while(Q--)
	{
	    scanf("%llu %llu",&T,&K);
	    if(T == 1)
	    {
		lli cnt=0,res=1;
		for(lli i=2 ; i*i<=K ; ++i)
		{	
		cnt = 0;
		if(!(K % i))
		{
			while(!(K % i))
			cnt++,K /= i;
		if(mp[i])
		res *= (min(cnt,mp[i])+1);
		}
		}
	
		if(K > 1 && mp[K])
 			res *= 2;
			cout<<res<<"\n";
	    }
	    else if(T == 2)
	    {
	        lli count=0;
	        for(lli i = 0 ; i < divisors.size() ; ++i)
	        if(!(divisors[i] % K))
	        count++;
	        cout<<count<<"\n";
	    }
	    else
	    {
	        lli count=0;
	        for(lli i = 0 ; i < divisors.size() ; ++i)
	        if(divisors[i] % K)
	        count++;
	        cout<<count<<"\n";
	    }
	}
	return 0;
}
