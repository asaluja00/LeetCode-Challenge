class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        char arr[26];
        for(int i=0;i<26;i++){
            arr[i]= 'a' +i;
        }
        for(int i=0;i<s1.length();i++){
            char toreplace = max(arr[s1[i]-'a'] , arr[s2[i]-'a']);
            char replacewith=  min(arr[s1[i]-'a'] , arr[s2[i]-'a']);
            for(int i=0;i<26;i++){
                if(arr[i]==toreplace) arr[i]= replacewith;
            }
        }
        for(int i=0;i<baseStr.length();i++){
            baseStr[i]=arr[baseStr[i] -'a'];
        }
        
        return baseStr;
    }
};