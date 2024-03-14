class Solution {
public:
    int atmost(vector<int>&nums,int g)
    {
        long long int head=0,tail=0,sum=0,size=0;
        //iterating head
        for(head=0; head<nums.size(); head++)
        {
            //doing the sum
            sum += nums[head];
            
            //if sum exceeds the goal value
            while(tail<=head && sum>g)
            {
                sum -= nums[tail];
                tail++;
            }
            
            //updating the size each time head or tail is incremented
            size += head-tail+1;
            
        }
        return size;
        
    }
    
    
    int numSubarraysWithSum(vector<int>& nums, int goal) 
    {
        return atmost(nums,goal)-atmost(nums,goal-1);
    }
};