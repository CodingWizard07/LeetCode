class Solution {
public:
    string maximumOddBinaryNumber(string& s) {
        int n=s.size(), r=n-1, l=0;
        if (s[r]!='1') {// last bit must be 1
            while(s[l]!='1') l++;
            swap(s[l], s[r]);
        }
        l=0, r=n-2;//Rewind l, r
        while(l<r){
            while(l<n && s[l]=='1') l++;
            while(r>=0 && s[r]=='0') r--;
            if (l<r) swap(s[l], s[r]);
        }
        return s;
    }
};