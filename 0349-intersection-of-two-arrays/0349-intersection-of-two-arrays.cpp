class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            int element = nums1[i];
            bool alreadyAdded = false;
            for (int j = 0; j < nums2.size(); j++) {
                if (element == nums2[j]) {
                    for (int k = 0; k < ans.size(); k++) {
                        if (element == ans[k]) {
                            alreadyAdded = true;
                            break;
                        }
                    }
                    if (!alreadyAdded) {
                        ans.push_back(element);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};
