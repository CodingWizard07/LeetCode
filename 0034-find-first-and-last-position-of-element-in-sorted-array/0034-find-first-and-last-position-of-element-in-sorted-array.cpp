class Solution {
public:
    int lowerbound(vector<int>& nums, int target,int n) {

        int low=0, high=n-1;
        int pos=n;
        
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid] >= target)
            {
                pos=mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return pos;
    }
    
    int upperbound(vector<int>& nums, int target,int n) {

        int low=0, high=n-1;
        int pos=n;
        
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid] > target)
            {
                pos=mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return pos;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lb = lowerbound(nums,target,n);
        int ub = upperbound(nums,target,n);
        //if element is not found
        if(lb == n || nums[lb] != target)
        {
            return {-1,-1};
        }
        return {lb,ub-1};
    }
};