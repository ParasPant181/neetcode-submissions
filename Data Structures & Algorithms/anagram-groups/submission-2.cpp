class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        map<vector<int>,vector<string>>mp;
        for(int i=0;i<n;i++){
            string s1=strs[i];
            vector<int>t(26,0);
            for(int j=0;j<s1.size();j++){
                int temp=s1[j]-'a';
                t[temp]++;
            }
            mp[t].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
