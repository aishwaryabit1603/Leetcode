class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0;
        int i = 0;
        int j = 0;
        int n = nums1.size();
        int m = nums2.size();
        int t = (n + m);
        if(n == 0){
            int n1 = m/2;
            if(m%2 == 0){
                if(n1 < m)
                    return double((nums2[n1]+nums2[n1-1]))/2;
            }
            return nums2[n1];
        }
        if(m == 0){
            int n1 = n/2;
            if(n%2 == 0){
                if(n1 < n)
                    return double((nums1[n1]+nums1[n1-1]))/2;
            }
            return nums1[n1];
        }
        int x = t/2+1;
        vector<int>arr(x);
        int k = 0;
       
        int size = 0;
        while(i < n && j < m && k < x){
            if(nums1[i] <= nums2[j]){
                arr[k] = nums1[i];
                i++;
            }
            else{
                arr[k] = nums2[j];
                j++;
            }
            k++;
        }
        while(i < n && k < x){
            arr[k] = nums1[i];
            i++;
            k++;
        }
        while(j < m && k < x){
            arr[k] = nums2[j];
            j++;
            k++;
        }
        // cout << arr[arr.size()-1];
        if(t % 2 == 0){
            return double((arr[arr.size()-1] + arr[arr.size()-2]))/2;
        }
        return double(arr[arr.size()-1]);
    }
};