
/*What is Euler's totient function? and it's imprementation - issue id #11
    Eulers totient function is a really important mathematical funtion which is used 
    critically in Cryptography and Network Security softwares, It is represented as phi.
    Its one of the most important concept of computational number theory. 

    Defination:- Eulers totient function is defined as the number of positive integers less than N that 
    are coprime to N. 
    
    for example phi(5)= 4 as below 5 only {1,2,3,4} numbers are there which are coprime to 5 itself.
                phi(6)= 2 as below 6 only {1,5} are the numbers which are coprime to 6. 

    Properties of EulersTotient funtion:-
                1. phi(a*b)= phi(a)*phi(b) if a and b are coprime
                2. phi(n)= n-1 if n is itself a prime number 
*/

//Code for Finding Eulers Totient Funtion -
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
// method 1 Recursion in O(N log N ) time
int PhiThroughRecursion(int n)
{
    int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}
// method 2  Dynamic Programming in O()

int PhiThroughDP(int n)
{

    long long phi[n + 1];
    for (int i = 1; i <= n; i++)
        phi[i] = i; // indicates not evaluated yet
                    // and initializes for product
                    // formula.

    // Compute other Phi values
    for (int p = 2; p <= n; p++)
    {
        // If phi[p] is not computed already,
        // then number p is prime
        if (phi[p] == p)
        {
            // Phi of a prime number p is
            // always equal to p-1.
            phi[p] = p - 1;

            // Update phi values of all
            // multiples of p
            for (int i = 2 * p; i <= n; i += p)
            {
                // Add contribution of p to its
                // multiple i by multiplying with
                // (1 - 1/p)
                phi[i] = (phi[i] / p) * (p - 1);
            }
        }
    }
    return (int)phi[n];
}

// method 3  in O(constant ) time using Eulers Totient formula - You can find
// more about the formula on https://en.wikipedia.org/wiki/Euler%27s_totient_function

int PhiThroughFormula(int n)
{
    // Initialize result as n
    float result = n;

    // Consider all prime factors of n
    // and for every prime factor p,
    // multiply result with (1 - 1/p)
    for (int p = 2; p * p <= n; ++p)
    {

        // Check if p is a prime factor.
        if (n % p == 0)
        {

            // If yes, then update n and result
            while (n % p == 0)
                n /= p;

            result *= (1.0 - (1.0 / (float)p));
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result *= (1.0 - (1.0 / (float)n));

    return (int)result;
}

int main()
{
    int n;
    for (n = 1; n <= 10; n++)
        cout << "phi(" << n << ") = " << PhiThroughDP(n) << endl;
    cout << "phi(" << n << ") = " << PhiThroughFormula(n) << endl;
    cout << "phi(" << n << ") = " << PhiThroughRecursion(n) << endl;

    return 0;
}

/* Additional Reading -

https://cp-algorithms.com/algebra/phi-function.html
https://www.geeksforgeeks.org/eulers-totient-function-for-all-numbers-smaller-than-or-equal-to-n/
https://www.geeksforgeeks.org/eulers-totient-function/
http://e-maxx.ru/algo/euler_function
http://en.wikipedia.org/wiki/Euler%27s_totient_function

Questions for Practice- 

https://practice.geeksforgeeks.org/problems/euler-totient/0
https://www.codechef.com/START14B/problems/TUPCOUNT


*/