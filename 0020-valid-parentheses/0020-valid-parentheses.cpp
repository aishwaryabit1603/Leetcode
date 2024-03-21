class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        char ans[n];
        int top = -1;
        for(int i = 0;i < n;i++){
            if(s[i] == '('){
                top++;
                ans[top] = '(';
            }
            else if(s[i] == '['){
                top++;
                ans[top] = '[';
            }
            else if(s[i] == '{'){
                top++;
                ans[top] = '{';
            }
            else if(s[i] == ')'){
                if(top != -1 && ans[top] == '(')
                    top--;
                else
                    return false;
            }
            else if(s[i] == ']'){
                if(top != -1 && ans[top] == '[')
                    top--;
                else
                    return false;
            }
            else if(s[i] == '}'){
                if(top != -1 && ans[top] == '{')
                    top--;
                else
                    return false;
            }
        }
        if(top != -1) return false;
        return true;
    }
};