#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
//VJ's Code

vector<string> split_string(string);

vector < vector < lli > > mul(vector < vector < lli > >& A, vector < vector < lli > >& B)
{
    vector< vector < lli > > C(A.size(), vector<lli>(A.size()));
    for ( int i = 0 ; i < A.size() ; ++ i)
    {
        for ( int j = 0 ; j < A.size() ; ++ j)
        {
            C[i][j] = 0;
            for ( int k = 0 ; k < A.size() ; ++ k)
            {
                lli x = ((A[i][k] % mod) * (B[k][j] % mod) % mod);
                C[i][j] += x;
            }
        }
    }
    return C;
}

void power(vector< vector< lli > > &matrix, int n, int d)
{
    vector < vector < lli > > res(d, vector<lli> (d));
    
    for ( lli i = 0 ; i < d ; ++ i)
        res[i][i] = 1;
        
    while ( n ) 
    {
        if(!(n & 1))
        {
            matrix = mul(matrix,matrix);
            n /= 2;
        }
        else
        {
            res = mul(res,matrix);
            n --;
        }
        
    }
    matrix = res;
    
}

// Complete the solve function below.
int solve(int a, int b, int n) {
    if ( n == 0)
    return a;
    if( n == 1)
    return b;

    vector < vector < lli > > matrix ( 2 , vector < lli > (2));
    matrix[0][0] = matrix[0][1] = matrix[1][0] = 1;
    matrix[1][1] = 0;
    power(matrix, n, 2);

    return (a*matrix[1][1] + b*matrix[1][0] ) % mod;

}

int main()
{
	int t,a,b,n;
	cin>>t;
	
	while(t --)
	{
		cin>>a>>b>>n;
		cout<<solve(a,b,n)<<"\n";
	}
}
