//Power of Matrix (dim^3)logn
//1. Naive approach , Complexity O(M^3 * N)
//2. Binary exponentiation , Complexity O(M^3 * logN)
#include <bits/stdc++.h>
#define MAX 101
#define mod 1e9+7
using namespace std;
int arr[MAX][MAX] , I[MAX][MAX];
void mul(int A[][MAX] , int B[][MAX] , int dim)
{
		int res[dim+1][dim+1];
		for(int i=1 ; i<=dim ; ++i){
			for(int j=1 ; j<=dim ; ++j){
				res[i][j] = 0;
				for(int k=1 ; k<=dim ; ++k)
				{
					res[i][j] += (A[i][k] * B[k][j] ) % mod;
				}
			}
		}
		
		for(int i=1 ; i<=dim ; ++i)
			for(int j=1 ; j<= dim ; ++j)
				A[i][j] = res[i][j];
				
}
void power(int A[][MAX] , int dim , int n)
{
	for(int i=1 ; i<=dim ; ++i)
		for(int j=1 ; j<=dim ; ++j)
			if(i == j) I[i][j] = 1; else I[i][j]=0;
			
	//for(int i=1 ; i<=n ; ++i)
		//mul(I,A,dim);
		
		while(n)
		{
			if(!(n &1 ))
			mul(A,A,dim),n /= 2;
			else
			mul(I,A,dim),n--;
		}
		
	for(int i=1 ; i<=dim ; ++i)
		for(int j=1 ; j<=dim ; ++j)
			A[i][j] = I[i][j];
}
void printMatrix(int A[][MAX] , int dim)
{
	for(int i=1 ; i<=dim; ++i){
		for(int j=1 ; j<=dim ; ++j)
			cout<<A[i][j]<<" ";
			cout<<"\n";
			}
}
int main()
{
	int t , dim , n;
	cin >>t;
	while(t--)
	{
		cin >>dim >>n;
		for(int i= 1 ; i<=dim ; ++i)
			for(int j=1 ; j<=dim ; ++j)
				cin>>arr[i][j];
	power(arr , dim , n);
	printMatrix(arr , dim);
	}
	
    return 0;
}
