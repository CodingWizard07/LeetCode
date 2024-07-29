class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        
        int natural_sum = 0;
        int curr_sum = 0;
        for(int i=0; i<=n; i++){
            natural_sum += i;
            
        }
        
        for(int i=0;i<n;i++)
        {
            curr_sum += nums[i];
            
        }
        
        int diff = natural_sum - curr_sum;
        return diff;
    }
};