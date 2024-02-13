class Solution {
public:
    bool ispalindrome(const string &a)
{
    int s = 0;
    int e = a.size() - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

string firstPalindrome(vector<string> &words)
{
    vector<string> palindrome_words;
    for (const string &word : words)
    {
        if (ispalindrome(word))
        {
            return word;
        }
    }
    return "";

}
};