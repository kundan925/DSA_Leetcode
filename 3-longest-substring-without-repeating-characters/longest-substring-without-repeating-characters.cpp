class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        int i=0;
        int j=0;
        int window=0;
        while(j<n){
            mp[s[j]]++;
            if(mp.size()==j-i+1){
                window=max(window,j-i+1);
                j++;
            }else if(mp.size()<j-i+1){
                while(mp.size()<j-i+1){
                    char ch=s[i];
                    mp[ch]--;
                    if(mp[ch]==0){
                        mp.erase(ch);
                    }
                    i++;
                }
                j++;
            }
        }
        return window;
    }
};