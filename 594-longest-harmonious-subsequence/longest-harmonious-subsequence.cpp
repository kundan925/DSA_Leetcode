class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        unordered_map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        if(mp.size()==1){
            return 0;
        }
        int ans=0;
        for(auto x : mp){
            if(mp.find(x.first-1)!=mp.end()){
                ans=max(ans,x.second+mp[x.first-1]);
            }
        }
        return ans;
    }
};