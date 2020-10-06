#include <bits/stdc++.h>
#define lli long long int
using namespace std;

//c++ 14
#include <bits/stdc++.h>
#define lli long long int
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n,q,l,r;
    cin>>t;
    
    while( t --)
    {
        cin>>n>>q;
        
        vector<int> arr(n);
        for ( int i =0 ; i < n ; ++ i)
        cin>>arr[i];
        int pre[n+1] {0},suf[n+2] {0};
        
        for ( int i = 0 ; i < n ; ++ i)
        pre[i+1] = __gcd(arr[i],pre[i]);
        
        int j = n+1;
        for ( int i = n-1 ; i >= 0 ; -- i, --j)
        suf[i+1] = __gcd(arr[i],suf[j]);
        
        while(q --)
        {
            cin>>l>>r;
            cout<<__gcd(pre[l-1], suf[r+1])<<"\n";
        }
    }

    return 0;
}









//c++ 17
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,n,q,l,r;
    cin>>t;
    
    while( t --)
    {
        cin>>n>>q;
        
        vector<int> arr(n);
        for ( int i =0 ; i < n ; ++ i)
        cin>>arr[i];
        vector<int> pre(n+1,0);
        vector<int> suf(n+2,0);
        
        for ( int i = 0 ; i < n ; ++ i)
        pre[i+1] = gcd(arr[i],pre[i]);
        
        int j = n+1;
        for ( int i = n-1 ; i >= 0 ; -- i, --j)
        suf[i+1] = gcd(arr[i],suf[j]);
        
        while(q --)
        {
            cin>>l>>r;
            cout<<gcd(pre[l-1], suf[r+1])<<"\n";
        }
    }

    return 0;
}
