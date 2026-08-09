class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>vec(26,0);
        for(int i=0;i<s.size();i++){
            int idx=s[i]-'a';
            int idx2=t[i]-'a';
            vec[idx]++;
            vec[idx2]--;
        }
        for(int i=0;i<26;i++){
            if(vec[i]!=0)return false;
        }
        return true;

    }
};
