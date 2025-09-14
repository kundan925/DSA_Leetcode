class Solution {
public:
    void solve(vector<int>& candidates, int index, int sum, int target, vector<int> &temp, vector<vector<int>> &ans){
        if(sum==target){
            ans.push_back(temp);
            return;
        }
        if(sum>target || index>candidates.size()){
            return;
        }
        for(int i=index;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            solve(candidates, i, sum+candidates[i], target, temp, ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        int index = 0;
        int sum = 0;
        solve(candidates, index, sum, target, temp, ans);
        return ans;
    }
};