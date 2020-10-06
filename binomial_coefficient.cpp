#include <bits/stdc++.h>
#define lli long long int
using namespace std;
//int nChoosek(int n, int k) // recursive approach
//{
	//if(n == k ||k == 0)
	//return 1;
	//else
	//return nChoosek(n-1,k) +nChoosek(n-1,k-1);
//}
//int nChoosek(int n, int k) // iterative appproach
//{
    //int res = 1;
    //for (int i = n - k + 1; i <= n; ++i)
        //res *= i;
    //for (int i = 2; i <= k; ++i)
        //res /= i;
    //return res;
//}
int nChoosek(int n , int k) // more improvised 
{
	double res = 1;
    for (int i = 1; i <= k; ++i)
        res = res * (n - k + i) / i;
    return floor(res);
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<nChoosek(n,k)<<"\n";
    return 0;
}
