class Solution {
    static void heapify(int [] arr,int i,int n){
        int largest = i;
        int l = 2 * i + 1;
        int r = l + 1;
        if(l < n && arr[largest] < arr[l]) largest = l;
        if(r < n && arr[largest] < arr[r]) largest = r;
        
        // if already a max heap we won't go inside this condition
        if(largest != i){
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;

            // recursively heapify the affected subtree
            heapify(arr,largest,n);
        }
    }
    
    static void heapsort(int [] arr){
        int n = arr.length;

        //build heap
        for(int i = n/2-1; i >= 0;i--){
            heapify(arr,i,n);
        }
        for(int i = n-1;i > -1;i--){
            int temp = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
            heapify(arr,0,i);
        }
        
    }
    public int[] sortArray(int[] nums) {
        heapsort(nums);
        return nums;
    }
}