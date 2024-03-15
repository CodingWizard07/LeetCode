class Solution {
public:
   vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n, 1); // Initialize answer array with 1s

    // Calculate prefix products
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] *= prefix; // Update answer with prefix product
        prefix *= nums[i]; // Update prefix product
    }

    // Calculate suffix products
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix; // Update answer with suffix product
        suffix *= nums[i]; // Update suffix product
    }

    return answer;
}
};