class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> s1;
        string ans = "";
        for(int i = 0;i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z'){
                ans += s[i];
            }
            else if(s[i] == '('){
                ans += '(';
                s1.push('(');
            }
            else if(s[i] == ')' && !s1.empty() && s1.top() == '('){
                ans += ')';
                s1.pop();
            }
        }
        if(!s1.empty()){
            int len = s1.size();
            if(ans.length() == len) return "";
            
            for(int i = ans.length()-1;len > 0 && i > -1;i--){
                if(ans[i] == '('){
                    ans.erase(i,1);    
                    len--;
                }
            }
        }
        return ans;
    }
};