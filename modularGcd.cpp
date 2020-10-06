#include<bits/stdc++.h>

#define mod 1000000007

#define lli size_t


using namespace std;

lli power(lli a, lli n , lli d)
{
	lli res = 1;
	
	while(n)
	{
		if(n & 1)
		{
			res = ((res % d) * (a % d)) % d;
			n--;
		}
		
		else
		{
			a = ((a % d) * (a % d)) % d;
			n /= 2;
		}
	}
	
	return res;
}

lli GCD(lli A , lli B , lli n)
{
	if(A == B)
	{
		return (power(A , n , mod) + power(B , n , mod)) % mod;
	}
	else
	{
	
	lli candidate = 1;
	lli num = abs(A - B);
	
	for(lli i=1;i*i<=num;i++)
	if(num % i == 0)
	{
		lli tmp = (power(A , n , i) + power(B , n , i)) % i;
		
		if(!tmp) candidate = max(candidate , i);
		
		tmp = (power(A , n , num/i) + power(B , n , num/i)) % (num/i);
		if(!tmp) candidate = max(candidate , num / i);
	}
	return candidate % mod;
	}
	
	
}

int main()
{
	lli A , B , n , t;
	cin>>t;
	
	while(t--)
	{
		cin>>A>>B>>n;
		cout<<GCD(A , B , n)<<endl;
	}
}
