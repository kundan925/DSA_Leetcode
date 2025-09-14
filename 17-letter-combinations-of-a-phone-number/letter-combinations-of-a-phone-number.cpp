class Solution {
public:
    void solve(string &digits, int index, string output, vector<string> &ans, map<string, string> &mp){
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        string key(1, digits[index]);
        string v = mp[key];
        for(int j=0; j<v.length();j++){
            output.push_back(v[j]);
            solve(digits, index+1, output, ans, mp);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        map<string, string> mp;
        mp["2"] = {"abc"};
        mp["3"] = {"def"};
        mp["4"] = {"ghi"};
        mp["5"] = {"jkl"};
        mp["6"] = {"mno"};
        mp["7"] = {"pqrs"};
        mp["8"] = {"tuv"};
        mp["9"] = {"wxyz"};
        vector<string> ans;
        int i = 0;
        if(digits.length()==0){
            return ans;
        }else{
            solve(digits, i, "", ans, mp);
            return ans;
        }
    }
};