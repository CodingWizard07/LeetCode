class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int n=nums.size();
        
        int xor_value = 0;
        for(int i=0; i<n; i++)
        {
            xor_value = xor_value ^ nums[i];
        }
        return xor_value;
    }
};