class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.length();
        for(i = 0;i < s.length(); i++){
            if(s[i] != ' '){
                break;
            }
        }
        for(n = n - 1;n > -1;n--){
             if(s[n] != ' '){
                break;
            }
        }
        stack<string> st;
        string ans = "";
        for(;i <= n; i++){
            if(s[i] == ' ' && ans.length()){
                st.push(ans);
                // cout << ans << " ";
                ans = "";
            }
            // cout << s[i] << " ";
            if(s[i] != ' ')
                ans += s[i];
        }
        if(ans.length() != 0)
            st.push(ans);
        // cout << ans ;
        ans = "";
        while(st.size()){
            string top = st.top();
            if(st.size() != 1)
                ans = ans + top + " ";
            else
                ans = ans + top;
            st.pop();
        }
        return ans;
    }
};