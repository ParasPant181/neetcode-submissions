class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>mp(2001,0);
        for(int i=0;i<nums.size();i++){
            mp[nums[i]+1000]++;
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            int idx=-1,mx=INT_MIN;
            for(int j=0;j<2001;j++){
                if(mp[j]>mx){
                    mx=mp[j];
                    idx=j;
                }
            }
            int val=idx-1000;
            mp[idx]=0;
            ans.push_back(val);
        }
          return ans;
    }
  
};
