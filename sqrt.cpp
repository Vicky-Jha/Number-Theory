// Solution 1    
double mySqrt(double n) {
        double low = 0;
        double high = n;
        double mid = 0;
//        0.0000001 is the least minimum value for comparison
        while (high - low > 0.0000001) {
                mid = low + (high - low) / 2; // finding mid value
                if (mid*mid > n) {
                    high = mid;
                } else {
                    low = mid;
                }
        }
        return mid;
    }
    
//  Solution 2
   double mySqrt(int num) {

       double temp, sqrt;
       sqrt = num/2;
       temp = 0;

       while(sqrt != temp){
           temp = sqrt;
           sqrt = (num/sqrt + sqrt) / 2; // Newton's formula 
       }

      return (sqrt);
   }
