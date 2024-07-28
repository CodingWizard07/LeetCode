class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
       // 2 pointer approach
        int i=0;
        for(int j=1;j<n;j++){
            if(nums[j] != nums[i])
            {
                nums[i+1] = nums[j];
                i++;
            }
        }
        return i+1;
    }
};