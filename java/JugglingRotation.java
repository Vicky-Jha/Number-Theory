import java.util.Arrays;
import java.util.Scanner;
class JugglingRotation { 

    static int gCD(int i, int j) 
    { 
        if (j == 0) 
            return i; 
        else
            return gCD(j,i%j); 
    } 
    public static void main(String[] args) 
    { 
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        System.out.println("Before rotateLeft : "+Arrays.toString(arr));
         int k,d,pre,now; 
         System.out.println("Enter bt how many index to rotate");
         Scanner s= new Scanner(System.in);
         d=s.nextInt();
        for (int i = 0; i < gCD(d, arr.length); i++) { 
            k = arr[i]; 
            pre = i; 
            while (true) { 
                now = pre + d; 
                if (now >= arr.length) 
                    now = now - arr.length; 
                if (now == i) 
                    break; 
                arr[pre] = arr[now]; 
                pre = now; 
            } 
            arr[pre] = k; 
        } 
        System.out.println("After rotateLeft by '"+d+"' : "+Arrays.toString(arr));
    } 
} 
