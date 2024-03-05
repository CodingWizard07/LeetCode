
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
         // finding the array size
    int n = tokens.size();

    // initializing score
    int max_score = 0;

    // sorting the array
    sort(begin(tokens),end(tokens));

    int i = 0;
    int j = n - 1;
        
    int score = 0;
    while (i <= j)
    {
        // checking if power can be used to increase score
        if (power >= tokens[i])
        {
            power -= tokens[i];
            score += 1;
            i++;
            
            max_score = max(max_score,score);
        }
        // checking if score need to be used to increase power
        else if (score >= 1)
        {
            power += tokens[j];
            score -= 1;
            j--;
        }
        // if score is 0 and power is also less than tokens
        else
        {

            return max_score;
        }
    }
    return max_score;
    }
};