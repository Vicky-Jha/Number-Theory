#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli pre[100005];
lli post[100005];
lli arr[100005];
lli gcd(lli A , lli B)
{
    if(A == B || B == 0)
        return A;
    if(A == 0)
        return B;
    lli MIN,MAX;
    if(A < B){
        MIN = A;
        MAX = B;
    }
    else {MIN = B;MAX=A;}
    if(!(MAX % MIN))
        return MIN;
        
    lli check = 0;
    for(lli i = 1 ; i*i<=MIN ; ++i)
        if(!(MIN % i))
        {
            lli tmp = (MAX)%i;
            if(!tmp)
                check = max(check , i);
            tmp = MAX%(MIN/i);
            if(!tmp)
                check = max(check , MIN/i);
        }
    return check;
}
void Pre(lli n)
{
	pre[0] = 0;
	for(lli i = 1 ; i<=n ; ++i)
		pre[i] = gcd(pre[i-1],arr[i]);
		
}
void Post(lli n)
{
	post[n+1] = 0;
	for(lli i = n ; i>=1; --i)
		post[i] = gcd(post[i+1],arr[i]);
		
}
int main()
{
	lli t;
	scanf("%lld",&t);
	while(t--)
	{
		lli n,q;
		scanf("%lld %lld",&n,&q);
		for(lli i = 1 ; i<=n ; ++i)
		scanf("%lld",&arr[i]);
		Pre(n);
		Post(n);
		while(q--)
		{
			lli l ,r ;
			scanf("%lld %lld", &l,&r);
			printf("%lld\n",gcd(pre[l-1],post[r+1]));
		}
	}

    return 0;
}
