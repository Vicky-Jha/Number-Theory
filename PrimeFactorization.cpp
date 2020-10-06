//Prime Factors and Number of Divisors
//log(n)
#include <bits/stdc++.h>

using namespace std;

void primeFactors(int n)
{
    int cnt =0 ,res=1;
    int i = 2;
	while(n && i*i <= n)
    {
        cnt = 0;
        if(!(n % i))
        {

            while(!(n % i))
            {
            
                cnt++;
                n /= i;
            }
            cout<<i<<"^"<<cnt<<"\n";
            res *= (cnt+1);
        }
        ++ i;
    }
    if( n >1 ){
		cout<<n<<"^"<<"1"<<"\n";
		res *= 2;
	}
	cout<<"No of Divisors = " <<res<<"\n";
}


int main()
{

//    freopen("input.txt" , "r" , stdin);
//    freopen("output.txt" , "w" , stdout);
    int n;
    cin>>n;
    primeFactors(n);
}
