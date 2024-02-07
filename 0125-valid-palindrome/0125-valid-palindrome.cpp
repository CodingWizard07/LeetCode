class Solution {
public:
    
    char to_lower(char ch)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            return ch - 'A' + 'a';
        }
        return ch;
    }
    string remove(const string &s)
    {
        string r;
        for (char ch : s)
        {
            if (isalnum(ch))
            {
                r += to_lower(ch);
            }
        }
        return r;
    }
    
    bool isPalindrome(string s) 
    {
        
    string result = remove(s);

    int start = 0;
    int end = result.length() - 1;

    while (start <= end)
    {
        if (to_lower(result[start]) != to_lower(result[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}
};