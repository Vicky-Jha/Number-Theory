// since 5*2 = 10 and the number of 10s determines the number of trailing zeroes in the factorial
// hence count the number of '5' in prime factorization of number
// Thus, number of trailing zeroes = n/5 + n/25 + n/125 + n/625 + ....... till n >= 1

int trailingZeroes(int n)
{
    // Factorial doesn't exist
    if (n < 0)
        return -1;

    // Initialise the count variable
    int count = 0;

    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;  // increment the count with each power of 5 (n/i)

    return count;
}
