class Solution {
    public int findMin(int[] arr) {
        int low = 0;
        int high = arr.length - 1;
        int ans = arr[low];
        while(low <= high)
        {
            if(arr[low] <= arr[high]) return Math.min(ans,arr[low]);
            int mid = low + (high-low)/2;
            ans = Math.min(ans,arr[mid]);
            if(arr[mid] >= arr[low]){
                // search right
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
}