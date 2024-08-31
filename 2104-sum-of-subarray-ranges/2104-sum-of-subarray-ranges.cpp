class Solution {
public:
    vector<int> findNSE(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findPSE(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findNGE(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findPGE(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    
    long long subArrayRanges(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> nse(n), pse(n), nge(n), pge(n);
        const int mod = 1e9 + 7;
        long long sub_min_sum = 0;
        long long sub_max_sum = 0;
        long long total;
        
        nse = findNSE(nums);
        pse = findPSE(nums);
        for (int i = 0; i < n; i++) 
        {
            int left = i - pse[i];
            int right = nse[i] - i;

            sub_min_sum = (sub_min_sum + 1LL * left * right * nums[i]);
        }

        nge = findNGE(nums);
        pge = findPGE(nums);

        for (int j = 0; j < n; j++) {
            int left = j - pge[j];
            int right = nge[j] - j;

            sub_max_sum = (sub_max_sum + 1LL * left * right * nums[j]);
        }

        total = sub_max_sum - sub_min_sum;
        return total;
    }
};
