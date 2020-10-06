//sqrt(n)

#include <iostream>
#define mod 1000000007
#define lli long long int
using namespace std;

//lli gcd (lli A , lli B)
//{
//    if(B == 0) return A;
//        else return gcd ( B , A%B);
//}

lli gcd(lli A , lli B)
{
    if(A == B || B == 0)
        return A % mod;
    if(A == 0)
        return B % mod;
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
    return check%mod;
}


int main()
{
    lli a , b;
    cin>>a>>b;
    cout<<gcd(a,b)<<"\n";
    return 0;
}
