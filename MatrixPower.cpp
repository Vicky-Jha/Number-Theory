#include <bits/stdc++.h>
#define lli long long int
#define mod 1000000007
using namespace std;
//VJ's code
vector < vector < int > > mul(vector < vector < int > >& A, vector < vector < int > >& B)
{
	vector< vector < int > > C(A.size(), vector<int>(A.size()));
	for ( int i = 0 ; i < A.size() ; ++ i)
	{
		for ( int j = 0 ; j < A.size() ; ++ j)
		{
			C[i][j] = 0;
			for ( int k = 0 ; k < A.size() ; ++ k)
			{
				C[i][j] += ((A[i][k] % mod) * (B[k][j] % mod) % mod);
			}
		}
	}
	return C;
}

void power(vector< vector< int > > &matrix, int n, int d)
{
	vector < vector < int > > res(d, vector<int> (d));
	
	for ( int i = 0 ; i < d ; ++ i)
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
void printMatrix(vector < vector < int > >& matrix, int d)
{
	for ( int i = 0 ; i < d ; ++ i){
		for ( int j = 0 ; j < d ; ++ j){
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t,d,n;
    cin>>t;
    
    while(t --)
    {
		cin>>d>>n;
		vector < vector < int > > matrix(d, vector<int>(d));
		
		for ( int i = 0 ; i < d ; ++ i)
			for( int j = 0 ; j < d ; ++ j)
				cin>>matrix[i][j];
		power(matrix,n,d);
		printMatrix(matrix,d);
	}
	

    return 0;
}
