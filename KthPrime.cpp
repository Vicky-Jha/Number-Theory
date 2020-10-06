#include <bits/stdc++.h>
using namespace std;
vector<int> primes;
void SieveOfEratosthenes(int n)
{
    
    vector<bool> prime(n+1,1);
    
    for (int p=2; p*p<=n; p++)
    {
        
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    
    for (int p=2; p<=n; p++)
        if (prime[p])
            primes.emplace_back(p);
    
}
int main() {
    SieveOfEratosthenes(90000001);
    int q,n;
    cin>>q;
    while(q--)
    {
        cin>>n;
        cout<<primes[n-1]<<"\n";
    }
    return 0;
}
 
