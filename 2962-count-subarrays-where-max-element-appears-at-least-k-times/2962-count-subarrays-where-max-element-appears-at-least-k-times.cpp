class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int M=*max_element(nums.begin(), nums.end());
        int n=nums.size(), cnt=0;
        long long ans=0;
        for(int l=0, r=0; l<n; l++){
            while(cnt<k && r<n)
                cnt+=(nums[r++]==M);
            if (cnt>=k){
            //(n-r+1) subarray beginning with index l with cnt>=k
                ans+=(n-r+1); 
            }
            cnt-=(nums[l]==M);
        }
        return ans;
    }
};
