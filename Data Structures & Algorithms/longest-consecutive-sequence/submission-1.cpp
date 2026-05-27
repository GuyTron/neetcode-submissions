class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0 )return(0);
        unordered_map<int, int> m,fm;
        int lc = INT_MIN;
        for(int num : nums) m[num] = 1;
        for(int num : nums) {
            int curr_lc = findlongest(num, m, fm);
            if( curr_lc > lc ) lc = curr_lc;
        }
        return(lc);
    }

    int findlongest(int num, unordered_map<int, int>& m, unordered_map<int, int>& fm){
        if(fm.find(num) != fm.end()) return(fm[num]);
        if(m.find(num+1) != m.end()) fm[num] = 1+findlongest(num+1, m, fm);
        else fm[num] = 1;
        return(fm[num]);
    }
};
