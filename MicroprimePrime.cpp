#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
vector<int> countPrime(MAX+1,0);
vector<bool> isPrime(MAX+1,1);

void seive()
{
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i=2 ; i*i<=MAX ; ++i)
        if(isPrime[i])
            for(int j=i*i ; j<=MAX ; j += i)
                isPrime[j] = 0;
    for(int i = 1 ; i<=MAX ; ++i)
        countPrime[i] = + countPrime[i-1] + isPrime[i];
            
}
int main()
{
    seive();
    int t , l ,r ;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        int c=0;
        for(int i=l ; i<=r ; ++i)
            if(isPrime[countPrime[i]]){
                c++;
//                cout<<isPrime[countPrime[i]]<<" "<<countPrime[i] << " "<<i<<"\n";
            }
        cout<<c<<"\n";
    }
    return 0;
}
