
#include <iostream>
#define lli long long int
using namespace std;

lli gcd (lli A , lli B)
{
    if(B == 0) return A;
        else return gcd ( B , A%B);
}


int main()
{
    lli a , b;
    cin>>a>>b;
    cout<<gcd(a,b)<<"\n";
    return 0;
}
