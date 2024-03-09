#include <unordered_set>
#include <algorithm>
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> NumSet(begin(nums1),end(nums1));
        
        int minCommon = INT_MAX;
        bool found = false;
        
        for (int num : nums2) {
            if (NumSet.find(num) != NumSet.end()) 
            {
                minCommon = min(minCommon, num);
                found = true;
            }
        }
        if(found)
        {
            return minCommon;  
        }
        else{
            return -1;
        }
    }
            
};