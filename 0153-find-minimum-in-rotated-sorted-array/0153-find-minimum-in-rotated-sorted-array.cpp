class Solution {
public:
    int findMin(vector<int>& nums) {
        int k = INT_MAX;
        int n = nums.size();
        int low = 0,high = n-1;
        
        while(low <= high)
        {
            int mid = low +(high-low)/2;
            //if sorted array is the left part
            if(nums[low] <= nums[mid])
            {
                k = min(k, nums[low]);
                low = mid+1;
            }
            //if sorted array is in right part
            else if(nums[mid] <= nums[high])
            {
                k = min(k, nums[mid]);
                high = mid-1;
            }
        }
        return k;
    }
};