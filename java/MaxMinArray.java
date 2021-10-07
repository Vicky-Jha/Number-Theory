
//User function Template for Java

class Get
{
    public static int maximumElement(int arr[],int n)
    {
        // Your code here
        int max = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>max)
            max = arr[i];
        }
        return max;
    }
    
    public static int minimumElement(int arr[],int n)
    {
        // YOUR code here
        int min = arr[0];
        for(int i=1; i<n; i++)
        {
            if(arr[i]<min)
            min = arr[i];
        }
        return min;
    }
}
