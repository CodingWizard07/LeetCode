class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j && s[i] == s[j]) {
            char target = s[i];
            // Remove all occurrences of 'target' from the beginning
            while (i <= j && s[i] == target) {
                s.erase(i, 1);
                j--; 
            }
            // Remove all occurrences of 'target' from the end
            while (i <= j && s[j] == target) {
                s.erase(j, 1);
                j--;
            }
        }
        
        return s.length();
    }    
    
};