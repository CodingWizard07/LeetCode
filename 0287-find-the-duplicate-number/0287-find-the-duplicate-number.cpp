class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        int result;
        int duplicate;
        for(int i=0;i<nums.size();i++)
        {
            result = nums[i];
            
            //if map contains result i.e. duplicate is found
            if(mp.find(result) != mp.end())
            {
                duplicate = result;
            }
            else{
                mp[result]=i;
            }
        }
        return duplicate;
    }
};