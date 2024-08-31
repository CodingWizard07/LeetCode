class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        vector<int> ans;
        
        for(int i=0; i<n; i++)
        {
            if(asteroids[i] > 0)
            {
                st.push(asteroids[i]);
            }
            else
            {
                while(!st.empty() && st.top() > 0 && st.top() < abs(asteroids[i]))
                    st.pop();

                if(!st.empty() && st.top() == abs(asteroids[i])){
                    st.pop();
                }
                else if(st.empty() || st.top()<0){
                    st.push(asteroids[i]);
                }

            }
        }

       //put the elements in vector<int>ans and return ans.
         while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        // The vector needs to be reversed to maintain the original order
        reverse(ans.begin(), ans.end());

        return ans;
    }
};