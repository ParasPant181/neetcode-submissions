class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp1.find(t[i])!=mp1.end()){
                mp1[t[i]]--;
                if(mp1[t[i]]==0)mp1.erase(t[i]);
            }
            else return false;
        }
        for(int i=0;i<s.size();i++){
            if(mp2.find(s[i])!=mp2.end()){
                mp2[s[i]]--;
                if(mp2[s[i]]==0)mp2.erase(s[i]);
            }
            else return false;
        }
        if(mp1.empty() && mp2.empty())return true;
        else return false;
    }
};
