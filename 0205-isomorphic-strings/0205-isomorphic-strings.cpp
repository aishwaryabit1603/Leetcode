class Solution {
public:
    bool isIsomorphic(string s, string t) { 
        map<char,char> mp;
        map<char,char> mp2;
        int i = 0;
        while(i < s.length()){
            // cout <<i << endl;
            if(mp.find(s[i]) == mp.end()){
                if(mp2.find(t[i]) == mp2.end()){
                    mp2[t[i]] = s[i]; 
                }
                else if(mp2[t[i]] != s[i]) return false;
                mp[s[i]] = t[i];
                // cout << s[i] << " " << t[i]<<endl;
            }
            else{
                // cout << mp[s[i]] << " " << t[i] << endl;
                if(mp[s[i]] != t[i]) return false;
            }
            i++;
        }
        return true;
    }
};