class Solution {
    public int lengthOfLongestSubstring(String s) {
        int ans = 0;
        int n = s.length();
        if(n == 0) return 0;
        HashSet<Character> mp = new HashSet<>();
        int max = 1;
        int count = 0;
        int i = 0;
        int j = 0;
        while(i < n){
            if(mp.contains(s.charAt(i))){
                mp.clear();
                max = Math.max(max,count);
                count = 0;
                i = j + 1;
            }
            else {
                if(count == 0){
                    j = i;
                }
                mp.add(s.charAt(i));
                count++;
                i++;
            }
        }
        max = Math.max(max,count);
        return max;
    }
}