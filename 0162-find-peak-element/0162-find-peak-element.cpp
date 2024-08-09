class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        
        //only 1 element
        if(n == 1) 
            return 0;
        
        //if the 1st or last element is the peak
        if(nums[0] > nums[1])
            return 0;
        if(nums[n-1] > nums[n-2])
            return n-1;
        
        low = 1,high = n-2;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            // if element is found
            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
                return mid;
            // if the array is in increasing order
            else if(nums[mid] > nums[mid-1])
                low = mid+1;
            //if it is in decreasing order
            else
                high = mid-1;
        }
        
        return -1;
    }
};