class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string s1=strs[i];
            sort(s1.begin(),s1.end());
            if(mp.find(s1)!=mp.end()){
                mp[s1].push_back(strs[i]);
            }
            else{
                mp[s1].push_back(strs[i]);
            }
        }
        vector<vector<string>>ans;
        for(auto x:mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
