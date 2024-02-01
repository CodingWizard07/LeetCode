class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> first = nums1;
        vector<int> second = nums2;
        int len1 = m;
        int len2 = n;
        int i = 0, j = 0;
        
        while (i < len1 && j < len2) {
            if (first[i] < second[j]) {
                nums1[i + j] = first[i];
                i++;
            } else {
                nums1[i + j] = second[j];
                j++;
            }
        }
        
        // Copy remaining elements of first or second array if any
        
        while (i < len1) {
            nums1[i + j] = first[i];
            i++;
        }
        
        while (j < len2) {
            nums1[i + j] = second[j];
            j++;
        }
    }
};
