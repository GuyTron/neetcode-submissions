class Solution {
public:
    int maxProfit(vector<int>& p) {
        int i=0, j=1, prof = 0;
        while(i<j && j<p.size()){
            int curr_prof = p[j] - p[i];
            if(curr_prof < 0) {
                i=j;
                j=j+1;
            } else{
                prof = max(prof, curr_prof);
                j++;
            }
        }
        return(prof);
    }
};
