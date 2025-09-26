class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int> ans;
        vector<int> freq(101,0);
        for(int i=0;i<k;i++){
            freq[nums[i]+50]++;
        }
        int count=0;
        for(int i=0;i<101;i++){
            if(freq[i]!=0){
                count+=freq[i];
                if(count>=x){
                    if(i-50>0){
                        ans.push_back(0);
                    }else{
                        ans.push_back(i-50);
                    }
                    break;
                }
            }
        }
        for(int i=k;i<n;i++){
            freq[nums[i-k]+50]--;
            freq[nums[i]+50]++;
            count=0;
            for(int j=0;j<101;j++){
                if(freq[j]!=0){
                    count+=freq[j];
                    if(count>=x){
                        if(j-50>0){
                            ans.push_back(0);
                        }else{
                            ans.push_back(j-50);
                        }
                        break;
                    }
                }
            }
        }
        return ans;
    }
};