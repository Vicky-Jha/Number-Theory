//User function Template for Java to merge 2 sorted Arrays 

class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i =0, j=0 , k=0;
        int[] arr = new int[m+n];
        while(i<m && j<n){
            if(nums1[i]<=nums2[j])
                arr[k++] = nums1[i++];
            else
                arr[k++] = nums2[j++];
        }
        while(i<m)
            arr[k++] = nums1[i++];
        while(j<n)
            arr[k++] = nums2[j++];
        
        for(int l = 0 ; l<m+n; l++)
            nums1[l] = arr[l];
    }
}
