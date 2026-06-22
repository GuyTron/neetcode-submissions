class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return(0);
        if(s.length() == 1) return(1);
        int i=0, j=1;
        unordered_map<char, int> m;
        m[s[0]]++;
        int l = 1;
        while(i < j && j < s.size())
        {
            if(m[s[j]] > 0){
                while(s[i] != s[j]) {
                    m[s[i]]--;
                    i++;
                };
                i++;
                j++;
            }
            else{
                l = max(l, j-i+1);
                m[s[j]]++;
                j++;
            }
        }
        return(l);
    }
};
