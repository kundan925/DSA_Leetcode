class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int n=nums1.length;
        int m=nums2.length;
        Set<Integer> st = new HashSet<>();
        for(int i=0;i<n;i++){
            st.add(nums1[i]);
        }
        Set<Integer> ans = new HashSet<>();
        for(int i=0;i<m;i++){
            if(st.contains(nums2[i])){
                ans.add(nums2[i]);
            }
        }
        int[] res=new int[ans.size()];
        int i=0;
        for(Integer x : ans){
            res[i++]=x;
        }
        return res;
    }
}