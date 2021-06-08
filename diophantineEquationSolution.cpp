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
    

void diophantineEquationSolution(int a, int b, int c) {
        int x, y;
        int d = extendedEuclidGcd(a, b, x, y);
        if(c % d != 0) {
            cout << "The given Equation has no solution" << endl;
            return;
        } else {
            cout << "The given has Infinite solutions" << endl;
        }
        x *= (c / d);
        y *= (c / d);
        cout << "General Solution is:" << endl;
        cout << "x = " << x << " + " << b / d << "k" << endl;
        cout << "y = " << y << " - " << a / d << "k" << endl;
        cout << "\t\t" << "k = 0, 1, 2..." << endl;
    }
int main() {
    diophantineEquationSolution(39, 15, 12);// equation 39x + 15y = 12
    return 0;
}
