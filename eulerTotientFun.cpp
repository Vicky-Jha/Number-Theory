#include<iostream>
using namespace std;

//Complexity O(sqrt(n))

// Solution 1
unordered_map<int, int> primeFactors(int n) {
    unordered_map<int, int> factorization;

    for(int i = 2; i <= n; ++i) {
        if(n % i == 0) {
            factorization[i] = 0;
            while (n % i == 0) {
                n /= i;
                factorization[i]++;
            }
        }
    }
    return factorization;
}


int eulerTotientFunction(int n) {
    int ETF = 1;
    unordered_map<int, int> factorization = primeFactors(n);

    for(auto factors : factorization) {
        ETF *= powerFunc(factors.first, factors.second - 1) * (factors.first - 1); // formula
    }

    return ETF;
}




// Solution 2

//counts total number of positive numbers which are coprime to n from 1 to n
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

//Explanation

//https://cp-algorithms.com/algebra/phi-function.html
//a^ϕ(m)≡1 (mod m) //Property of Euler totient function // ϕ(m) = m - 1 if m is prime
