//Micro just learned about prime numbers. But he quickly got bored of them, so he defined a new kind of numbers and called them Prime Prime Numbers. A number X is Prime Prime if number of prime numbers from 1 to X (inclusive) are prime. Now he wants to find out the number of Prime Prime numbers from L to R (inclusive). Help Micro with it.
//
//Input:
//First line consists of a single integer T denoting number of test cases
//Following T lines consists of two space separated integers denoting L and R
//
//Output:
//Print the number of Prime Prime Numbers for each between L and R for each test case in a new line.
//
//Constraints:
//1<=T<=10^5
//1<=L,R<=10^6
//

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
