class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>> &ans, vector<int> &temp, vector<bool> &used){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]){
                continue;
            }
            if(i>0 && nums[i]==nums[i-1] && !used[i-1]){
                continue;
            }
            used[i]=true;
            temp.push_back(nums[i]);
            solve(nums,ans,temp,used);
            temp.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<bool>used(nums.size(),false);
        vector<int> temp;
        solve(nums, ans, temp, used);
        return ans;
    }
};