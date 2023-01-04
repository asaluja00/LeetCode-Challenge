class Solution {
public:
    vector<string> split(string str){
        vector<string>s ;
        string word = "";
        for (auto x : str){
            if (x == ' '){
                s.push_back(word);
                word = "";
            }
            else word = word + x;
        }
        s.push_back(word);
        return s;
    }
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        words=split(s);
        map<char,string> mp;
        if(words.size()!=pattern.length()) return false;
        for(int i=0;i<pattern.length();i++){
            if(mp.find(pattern[i])!=mp.end()&&mp[pattern[i]]!=words[i]){ return false;}
            if(mp.find(pattern[i])!=mp.end()&&mp[pattern[i]]==words[i]){ continue;}
            for(auto it:mp){
                if(it.second == words[i]) return false;
            }
            
            mp[pattern[i]]=words[i];     
        }
        return true;
    }
};