//22.08.2020
Hello world welcomes you to programming

#include <bits/stdc++.h> 
#define lli long long int
using namespace std; 
 
void simpleSieve(lli limit, vector<lli>& prime) 
{ 
	bool mark[limit + 1]; 
	memset(mark, false, sizeof(mark)); 
 
	for (lli i = 2; i <= limit; ++i) { 
		if (mark[i] == false) { 
			prime.push_back(i); 
			for (lli j = i; j <= limit; j += i) 
				mark[j] = true; 
		} 
	} 
} 
 
void primesInRange(lli low, lli high) 
{ 
	lli limit = floor(sqrt(high)) + 1; 
	vector<lli> prime; 
	simpleSieve(limit, prime); 
 
	 
	lli n = high - low + 1; 
 
 
	bool mark[n + 1]; 
	memset(mark, false, sizeof(mark)); 
 
	for (lli i = 0; i < prime.size(); i++) { 
		lli loLim = floor(low / prime[i]) * prime[i]; 
		if (loLim < low) 
			loLim += prime[i]; 
		if(loLim==prime[i]) 
			loLim += prime[i]; 
		
		for (lli j = loLim; j <= high; j += prime[i]) 
			mark[j - low] = true; 
	} 
	for (lli i = low; i <= high; i++) 
		if (!mark[i - low]) 
			cout << i << "\n"; 
} 
 
 
int main() 
{ 
	lli low,t , high ;
	cin>>t;
	while(t--){
	cin>>low>>high;
	if(low == 1)
	low ++;
	primesInRange(low, high); 
	cout<<"\n";
	}
	return 0; 
} 
 
