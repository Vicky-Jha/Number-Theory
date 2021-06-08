
// Gives values of x, and y in equation ex. 39x + 15y = 12 iff 12 % gcd(39, 15) == 0
// https://cp-algorithms.com/algebra/extended-euclid-algorithm.html
int extendedEuclidGcd(int a, int b, int& x, int& y) {
        if(b == 0) {
            x = 1;
            y = 0;
            return a;
        }
        int x1, y1;
        int d = extendedEuclidGcd(b, a % b, x1, y1);
        x = y1;
        y = x1 - y1*(a/b);
        return d;
}
