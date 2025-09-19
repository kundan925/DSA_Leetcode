class Solution {
public:
    void solve(vector<int>& nums, int index, vector<int> &temp, vector<vector<int>> &ans){
        ans.push_back(temp);
        for(int i=index;i<nums.size();i++){
            temp.push_back(nums[i]);
            solve(nums,i+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        int index=0;
        solve(nums,index,temp,ans);
        return ans;
    }
};