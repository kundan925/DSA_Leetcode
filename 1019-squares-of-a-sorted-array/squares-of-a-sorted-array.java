class Solution {
    public int[] sortedSquares(int[] nums) {
        int n=nums.length;
        int right=n-1;
        int[] ans=new int[n];
        int left=0;
        int p=right;
        while(left<=right){
            if(Math.abs(nums[left])<Math.abs(nums[right])){
                ans[p]=nums[right]*nums[right];
                right--;
            }else{
                ans[p]=nums[left]*nums[left];
                left++;
            }
            p--;
        }
        return ans;
    }
}