class Solution {
public:
    vector<int> compute(string p){
       
        int n = p.size();
        vector<int> pre(n,0);
        for(int i = 1;i < n;i++)
        {
//             take highest from pre
            int j = pre[i-1];
            
//             if mismatch found move to when match was found
            while(j > 0 && p[i] != p[j]){
                j = pre[j-1];
            }
            if(p[i] == p[j]){
                j++;
            }
            pre[i] = j;
        }
        return pre;
    }
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        
        if(n < m) return -1;
        
        int i = 0;
        int j = 0;
        int pos = -1;
        vector<int> pre = compute(needle);
        
        while(i < n){
            if(haystack[i] == needle[j]){
                i++;
                j++;
            }
            else{
                if(j != 0){
                    j = pre[j-1];
                }
                else{
                    i++;
                }
            }
            if(j == m) return i-m;
        }
        return -1;
    }
};