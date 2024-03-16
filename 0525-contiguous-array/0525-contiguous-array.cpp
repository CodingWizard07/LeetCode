class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        // target sum is 0
        int curr_sum = 0;
        int result = 0;
        for(int i=0; i<nums.size(); i++)
        {
            // add 1 if nums[i] is i else add -1
            curr_sum += (nums[i]== 1) ? 1 : -1;
            
            //if map contains current sum
            if(mp.find(curr_sum) != mp.end())
            {
                result = max(result,i - mp[curr_sum]);
            }
            //if current sum is unique
            else{
                mp[curr_sum] = i;
            }
            
        }
        return result;
    
    }
};