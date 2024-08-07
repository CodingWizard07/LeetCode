class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        
        while(low <= high)
        {
            int mid = low +(high-low)/2;
            //if the element is found
            if(nums[mid]==target)
            {
                return mid;
            }
            //if the element is found in the left-sorted array
            if(nums[low] <= nums[mid])
            {
                if(nums[low] <= target && target <= nums[mid])
                    high = mid-1;
                else
                    low = mid+1;
                
            }
            //if the element is present in the right sorted array
            else
            {
                if(nums[mid] <= target && target <= nums[high])
                    low = mid+1;
                else
                    high = mid-1;
            } 
        }
        //element not found
        return -1;
    }
};