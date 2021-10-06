class Solution
{
    // Complete the function
    public static int immediateSmaller(int arr[], int n, int x)
    {
        // Your code here
        int max = -1;
        for(int i = 0 ; i<n ; i++)
        {
            if(arr[i]<x)
            {
                if(arr[i]>max)
                max = arr[i];
            }
        }
        return max;
    }
}
