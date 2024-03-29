class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        
        int i = 0;
        int j=0;
        int output=0;
        
        while(j<n){
            mp[nums[j]]++;
        
            if(mp[nums[j]]>k){
                while(nums[i]!=nums[j]){
                    mp[nums[i]]--;
                    i++;
                }
                mp[nums[i]]--;
                i++;
            }
            output=max(output,j-i+1);
            j++;
        }
        
        return output;
    }
};