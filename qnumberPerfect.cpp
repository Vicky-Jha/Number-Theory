#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<lli,lli>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;
map<lli,lli> PF;
lli total;

void factorize(lli n)
{
	total = 1;
	for(lli i=2;i*i<=n;i++)
	if(n % i == 0)
	{
		int cnt = 0;
		while(n % i == 0)
		cnt++ , n /= i;
		PF[i] = cnt;
		total *= (cnt + 1);
	}
	
	if(n > 1) PF[n] = 1 , total *= 2;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	lli t , n , q , k;
	cin>>n>>q;
	
	factorize(n);
	
	while(q--)
	{
		cin>>t>>k;
		if(t == 1)
		{
			lli res = 1;
			for(ii p : PF)
			{
				lli cnt = 0;
				while(k % p.ff == 0)
				cnt++ , k /= p.ff;
				res *= min(cnt , p.ss) + 1;
			}
			
			cout<<res<<endl;
		}
		else
		if(t == 2)
		{
			lli res = 1;
			for(ii p : PF)
			{
				lli cnt = 0;
				while(k % p.ff == 0)
				cnt++ , k /= p.ff;
				if(cnt > p.ss)
				{
					res = 0;
					break;
				}
				res *= (p.ss - cnt + 1);
			}
			if(k > 1) res = 0;
			cout<<res<<endl;
		}
		else
		{
			lli res = 1;
			for(ii p : PF)
			{
				lli cnt = 0;
				while(k % p.ff == 0)
				cnt++ , k /= p.ff;
				if(cnt > p.ss)
				{
					res = 0;
					break;
				}
				
				res *= (p.ss - cnt + 1);
			}
			
			if(k > 1) res = 0;
			cout<<total-res<<endl;
		}
	}
}


