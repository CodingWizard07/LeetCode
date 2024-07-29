class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      int n = nums.size();
        int count = 0;
        
        int j = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                j++;
                count = max(count,j);
            }
            else
            {   
                j=0;
            }
        }
         return count;  
    }
};