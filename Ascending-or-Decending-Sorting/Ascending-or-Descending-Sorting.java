/* This program is to check if the given array is sorted or not, it further checks
if it is ascending or the decending order, in which it is sorted

*/

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n, ascend = 1, decend = 1, i;
        int[] s = new int[1000];
        // taking array size as input
        n = sc.nextInt();

        // taking input of array elements
        for (i = 0; i < n; i++)
            s[i] = sc.nextInt();

        // initilizing array iterator
        i = 0;

        while ((ascend == 1 || decend == 1) && i < n - 1) {
            if (s[i] < s[i + 1])
                decend = 0;
            else if (s[i] > s[i + 1])
                ascend = 0;
            i++;
        }

        if (ascend == 1)
            System.out.println("The array is sorted in ascending order.\n");
        else if (decend == 1)
            System.out.println("The array is sorted in descending order.\n");
        else
            System.out.println("The array is not sorted.\n");
    }
}