// Link: https://www.codechef.com/problems/PRB01
#include <bits/stdc++.h>
#define MAX 100001
using namespace std;
vector<bool> isPrime(MAX+1 , 0);
//int isprime(int n)
//{
//     if(n == 1)
//     return false;
//    for(int i=2 ; i*i<=n ; i++)
//        if(n % i == 0)
//            return false;
//    return true;
//}
void seive()
{
    isPrime[1] = 1;
    for(int i=2 ; i*i<=MAX ; ++i)
    if(!isPrime[i])
        for(int j = i*i ; j<=MAX ; j += i)
            isPrime[j] = 1;
    
}
int main() {
    
    seive();
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(!isPrime[n])
        printf("yes\n");
        else
        printf("no\n");
    }
    return 0;
}
