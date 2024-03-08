class Solution {
public:
    vector<int> find_distinct(vector<int> &v)
{
    // stoe the distinct elements in new vector
    vector<int> dist;

    sort(begin(v), end(v));
    int count = 1;

    int i=0,j=1;
    dist.push_back(v[i]);
    while (j < v.size())
    {
        if(v[i] == v[j]){
            i++;
            j++;
        }
        else{
            dist.push_back(v[j]);
            count++;
            i=j;
            j++;
        }
    }

    return dist;
}

int maxFrequencyElements(vector<int>& nums) { 
    vector<int> d = find_distinct(nums);
    int n = d.size();

    //vector of frequencies
    vector<int> f(n);

    int sum = 0;
    int max_f = 0;

    for (int i = 0; i < n; i++)
    {
        int frequncy = count(nums.begin(),nums.end(),d[i]);
        f.push_back(frequncy);
        if (frequncy > max_f){
            max_f = frequncy;

        }     
    }
    
    for (int j = 0; j < f.size(); j++)
    {
        if(f[j] == max_f){
            sum += max_f;
        }
    }
    return sum;
    }
};