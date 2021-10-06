class Solution
{
    //Complete the function
    public static int isSorted(int arr[], int n)
    {
       /// Your code here
        if (n == 0 || n == 1)
            return 1;
 
        for (int i = 1; i < n; i++)
        {
            //Comparing last 2 elements to identify if asc or desc
            if(arr[n-2]<arr[n-1])
            {
                // Unsorted pair found
                if (arr[i - 1] > arr[i])
                    return 0;
            }
            else if(arr[n-2]>arr[n-1])
            {
                if (arr[i - 1] < arr[i])
                    return 0;                
            }
        }
        // No unsorted pair found
        return 1;        
    }
}
