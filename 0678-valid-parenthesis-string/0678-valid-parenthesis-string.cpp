class Solution {
public:
    bool checkValidString(string s) {
        stack<char> s1;
        string k = "";
        int i;
        for(int i = 0;i < s.length(); i++){
            if(s[i] =='('){
                s1.push('(');
                k += '(';
            }
            else if(!s1.empty() && s[i] == ')')
            {
                if(s1.top() == '('){
                    s1.pop();
                    bool found= false;
                    
                    // k string update
                    if(k.length()){
                        int j = k.length()-1;
                        for(j = k.length()-1;j > -1;j--) {
                            if(k[j] == '('){
                                 found = true;
                                 break;
                            }
                        }
                        if(found) k.erase(j,1);
                        else k.erase(k.length()-1,1);
                    }
                }
            }
            else if(s1.empty() && s[i] == ')'){
                 if(k.length() && k[k.length()-1] == '*'){
                     k.erase(k.length()-1,1);
                 }
                else return false;
            }
            else if(s[i] == '*'){
                k += '*';
            }
        }
        cout << k << endl;
        while(!s1.empty()) s1.pop();
        
        for(int i = 0;i < k.length();i++){
            if(k[i] == '('){
                s1.push('(');
            }
            else if(k[i] == ')'){
                if(!s1.empty() && s1.top() == '*'){
                    s1.pop();
                }
                else{
                    return false;
                }
            }
            else if(k[i] == '*'){
                if(!s1.empty() && s1.top() == '('){
                    s1.pop();
                }
                else{
                    s1.push('*');
                }
            }    
        }
        while(!s1.empty()){
            if(s1.top() == '(') return false;
            s1.pop();
        }
        return true;
    }
};