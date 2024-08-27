class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> prefix(n);
        vector<int> suffix(n);
        
        //Find prefixmax and suffixmax
        prefix[0] = height[0];
        for(int i=1; i<n; i++)
        {
            prefix[i] = max(prefix[i-1],height[i]);
        }
        
        suffix[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--)
        {
            suffix[i] = max(suffix[i+1],height[i]);
        }
        
        int total = 0;
        int leftMax,rightMax;
        for(int j=0; j<n;j++)
        {
            leftMax = prefix[j];
            rightMax = suffix[j]; 
            if(height[j]<leftMax && height[j]<rightMax)
            {
                total += min(leftMax,rightMax) - height[j];
            }
        }
        return total;
    }
};