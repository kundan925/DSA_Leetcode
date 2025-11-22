class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> rm;
        long long sum=0;
        rm[0]++;
        int ans=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            ans+=rm[rem];
            rm[rem]++;
        }
        return ans;
    }
};