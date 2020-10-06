#include <bits/stdc++.h>
#define MOD 10000000007         
#define lli long long int
using namespace std;
lli T[2][2] , I[2][2];

void mul(lli A[][2] , lli B[][2] )
{
		lli res[2][2];
		for(lli i=0 ; i<2 ; ++i){
			for(lli j=0 ; j<2 ; ++j){
				res[i][j] = 0;
				for(lli k=0 ; k<2 ; ++k)
				{
					lli x = (A[i][k] * B[k][j]) %MOD;
					res[i][j] = (res[i][j] + x ) % MOD;
				}
			}
		}
		
		for(lli i=0 ; i<=1 ; ++i)
			for(lli j=0 ; j<= 1 ; ++j)
				A[i][j] = res[i][j];
				
}
lli ntheSeries(lli n,lli a, lli b)
{
	lli res=0;
	T[0][0] = 0;
	T[0][1] = T[1][1] = T[1][0] = 1;
	I[0][0] = I[1][1] = 1;
	I[0][1] = I[1][0] = 0;
	if(n == 1)
	return a;
	if(n == 2)
	return b;
		
		while(n)
		{
			if(!(n &1 ))
			mul(T,T),n /= 2;
			else
			mul(I,T),n--;
		}
	
		res = (a*I[0][0] +b*I[1][0])%MOD;
		return res;	
}
int main()
{
	lli t,a,b,n;
	cin>>t;
	while(t--)
	{
		cin >> a>>b>>n;
		cout<<ntheSeries(n,a,b)<<"\n";
	}
    return 0;
}
