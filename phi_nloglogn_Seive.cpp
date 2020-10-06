#include <bits/stdc++.h>
#define lli long long int
#define MAXN 1000
using namespace std;
vector<int> phi(MAXN + 1);
void phi_1_to_n(int n) {
    
    phi[0] = 0;
    int c = 2;
    phi[1] = 1;
    for (int i = 2; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++) { // compulsory to iterate till n
        if (phi[i] == i) { //  basically checks if phi[i] is prime or not
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
        cout<<phi[56]<<" "<<c<<"\n";
        c++;
    }
}
int main()
{
    int n;
    cin>>n;
    phi_1_to_n(n);
    
    cout<<phi[n]<<"\n";
    return 0;
}
