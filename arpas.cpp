#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
if (n == 0)
	cout << "1\n";
else 
{
	int d[] = {8, 4, 2, 6};
	n--;
	n %= 4;
	cout << d[n] << "\n";
}
return 0;
}

