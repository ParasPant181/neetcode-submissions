class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         if(nums.size()==0)return false;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1])return true;
        // }
        // return false;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                return true;
            }
            else mp[nums[i]]++;
        }
        return false;
    }
};