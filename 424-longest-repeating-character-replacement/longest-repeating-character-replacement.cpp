class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        map<char,int> mp;
        int left=0;
        int right=0;
        int maxFreq=0;
        int len=0;
        while(right<n){
            mp[s[right]]++;
            maxFreq=max(maxFreq,mp[s[right]]);
            int windowLen = right-left+1;
            if(windowLen-maxFreq>k){
                mp[s[left]]--;
                left++;
            }
            len=max(len,right-left+1);
            right++;
        }
        return len;
    }
};