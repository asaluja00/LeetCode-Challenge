class Solution {
public:
    bool detectCapitalUse(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            if(islower(s[i])) count++;
        }
        if(count==s.size()) return true;
        if(isupper(s[0]) && count==s.size()-1) return true;
        if(count==0) return true;
        return false;
    }
};