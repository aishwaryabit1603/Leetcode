class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i <= j)
        {
            char a = s[i];
            char b = s[j];
            
            if(!isalnum(a)){
                i++;
            }
            else if(!isalnum(b)){
                j--;
            }
            else{
                a = tolower(s[i]);
                b = tolower(s[j]);
                if(a != b) return false;
                i++;
                j--;
            }
        }
        return true;
    }
};