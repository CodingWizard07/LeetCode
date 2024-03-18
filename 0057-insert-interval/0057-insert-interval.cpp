class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        
        int n = intervals.size();
        int i = 0;
        while(i < n)
        {
            //if the ith interval is less than newInterval
            if(intervals[i][1] < newInterval[0])
            {
                result.push_back(intervals[i]);
            }
            //if there is no overlapping possible
            else if(intervals[i][0] > newInterval[1])
            {
                break;
            }
            //case of overlapping : merge and move to next interval
            else
            {
                newInterval[0] = min(intervals[i][0],newInterval[0]);
                newInterval[1] = max(intervals[i][1],newInterval[1]);
            }
            i++;
        }
        
        result.push_back(newInterval);
        
        //if there are intervals left in the interval set , just append as it is in order
        while(i < n)
        {
            result.push_back(intervals[i++]);
            
        }
        
        return result;
    }
    
};