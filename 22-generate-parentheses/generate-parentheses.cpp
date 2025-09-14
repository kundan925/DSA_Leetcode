class Solution {
public:
    void solve(int n, int open, int close, string out, vector<string> &ans){
        if(2*n==open+close){
            ans.push_back(out);
            return;
        }
        if(open<n){
            solve(n, open+1, close, out+'(', ans);
        }
        if(close<open){
            solve(n, open, close+1, out+')', ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string out = "";
        int open = 0;
        int close = 0;
        solve(n, open, close, out, ans);
        return ans;
    }
};