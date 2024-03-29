class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int i = 0;
        int j = 0;
        int result = 0;
        int pro=1;
        int n = nums.size();
        if(k <= 1){
           return 0; 
        }
        while(j < n)
        {
            
            pro *= nums[j];
            while(pro >= k)
            {
                pro /= nums[i];
                i++;
            }
            //update count of result
            result += (j-i+1);
            j++;
        }
        return result;
    }
};