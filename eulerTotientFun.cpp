#include<iostream>
using namespace std;
//Complexity O(sqrt(n))
//counts total number of positive numbers which are coprime to n upto n from 2
int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    cout<<n << " "<<result<<"\n";
    if (n > 1)//if n is prime
        result -= result/n;
    return result;
}
int main()
{
    int n;
    cin>>n;
    cout<<phi(n)<<"\n";
    return 0;
}


//Explanation

//https://cp-algorithms.com/algebra/phi-function.html
//a^ϕ(m)≡1 (mod m) //Property of Euler totient function
