class Solution {
public:
    void solve(vector<int>& candidates, int index, int sum, int target, vector<int>& ans, vector<vector<int>>& result){
        if(sum==target){
            result.push_back(ans);
            return;
        }
        
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]){
                continue;
            }
            if(sum>target){
                break;
            }
            ans.push_back(candidates[i]);
            solve(candidates, i+1, sum+candidates[i], target, ans, result);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int n = candidates.size();
        vector<vector<int>> result;
        vector<int> ans;
        int index = 0;
        int sum = 0;
        solve(candidates, index, sum, target, ans, result);
        return result;
    }
};