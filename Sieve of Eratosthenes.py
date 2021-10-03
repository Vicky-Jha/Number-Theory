class Solution:
    def sumFourDivisors(self, nums: List[int]) -> int:
        N = max(nums)
        four_div = [False] * (N + 1)
        #four_distinct_factors_sums
        sums = [0]*(N+1)
        
        def sieve_of_eratosthenes():
            is_prime = [True] * (N + 1)
            p = 2 
            while p * p <= N:  
                if is_prime[p]: 
                    i = p + p 
                    while i <= N: 
                        is_prime[i] = False
                        i += p
                p += 1
            return [p for p in range(2, N+1) if is_prime[p]] 
  
        def update_four_distinct_factors_sums():           
            primes = sieve_of_eratosthenes()
            for i, p in enumerate(primes): 
                #case a: 1, p,p*p, p*p*p
                case1 = p**3
                if (case1 <= N): 
                    four_div[case1] = True; 
                    sums[case1] = 1+p+p**2+case1
                #case b:1, p, q, p*q
                for j in range(i + 1, len(primes)): 
                    q = primes[j]
                    case2 = p*q
                    if (case2 > N):break
                    four_div[case2] = True
                    sums[case2] = 1+p+q+case2
        update_four_distinct_factors_sums()
        return sum(sums[n] for n in nums if four_div[n])
