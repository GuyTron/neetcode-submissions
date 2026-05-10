class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> v(2001, vector<int>( 2, 0));
        for(int i=0; i< nums.size(); i++)
        {
            v[nums[i]+1000][0] ++;
            v[nums[i]+1000][1] = nums[i];
        }
        sort(v.begin(), v.end());
        vector<int> res;
        for(int i=2000;k>0 ;i--){
            res.push_back(v[i][1]);
            k--;
        }
        return(res);
    }
};
