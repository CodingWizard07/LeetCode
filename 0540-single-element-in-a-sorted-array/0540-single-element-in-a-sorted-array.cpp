class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        
        
        while(low < high)
        {
            int mid = low+(high-low)/2;
            
            //conscecutive elements at i & i+1 positions are equal
            if(nums[mid] == nums[mid+1])
            {
                //single element must be present on that part
                if((high-mid)%2 == 0)
                {
                    low = mid+2;
                }
                else{
                    high = mid-1;
                }
            }
            
            //conscecutive elements at i & i+1 positions are not equal
            if(nums[mid] != nums[mid+1])
            {
                
                if((high-mid)%2 == 0)
                {
                    high = mid;
                }
                //single element must be present on that part
                else{
                    low = mid+1;
                }
            }
            
        }
        return nums[high];
    }
};