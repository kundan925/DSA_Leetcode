class Solution {
public:
    void solve(vector<int> &v, int index, int k, vector<int> &temp, vector<vector<int>> &ans){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<v.size();i++){
            temp.push_back(v[i]);
            solve(v,i+1,k,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        vector<int> temp;
        vector<vector<int>> ans;
        int index=0;
        solve(v,index,k,temp,ans);
        return ans;
    }
};