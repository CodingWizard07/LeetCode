class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0] = -1;
        
        int result;
        vector<int> duplicate;
        
        for(int i=0;i<nums.size();i++){
            int result = nums[i];
            //if duplicate element is found
            if(mp.find(result) != mp.end())
            {
                duplicate.push_back(result);
            }
            
            //if array element is unique
            else
            {
                mp[result] = i;
            }
        }
        return duplicate;
    }
};