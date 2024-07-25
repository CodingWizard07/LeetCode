class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map <int,int> m;
        
        for(int i=0; i<n; i++){
            int x = nums[i];
            int y = target - x;
            
            //checking if the y is present as an element in the ordered set
            if(m.find(y) != m.end()){
                return {m[y],i};
            }
            m[nums[i]] = i;
        }
        return {-1,-1};
    }
};