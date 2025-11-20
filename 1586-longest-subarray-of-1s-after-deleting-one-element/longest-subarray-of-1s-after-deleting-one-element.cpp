class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int zero=0;
        int len=0;
        int left=0;
        int right=0;
        while(right<n){
            if(nums[right]==0){
                zero++;
            }
            while(zero>1){
                if(nums[left]==0){
                    zero--;
                }
                left++;
            }
            len=max(len,right-left);
            right++;
        }
        return len;
    }
};