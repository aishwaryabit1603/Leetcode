class Solution {
    public int lengthOfLongestSubstring(String s) {
        int ans = 0;
        int n = s.length();
        if(n == 0) return 0;
        // if(n == 1) return 1;
        int max = 0;
        int start = -1;
        int [] arr = new int[256];
        for(int i = 0;i < 256; i++){
            arr[i] = -1;
        }
        for(int i = 0;i < s.length();i++){
            char ch = s.charAt(i);
            if(arr[ch] > start){
            start = arr[ch];
            }
            // store latest occurence
            arr[ch] = i;
            max = Math.max(max,i-start);
        }
        return max;
    }
}