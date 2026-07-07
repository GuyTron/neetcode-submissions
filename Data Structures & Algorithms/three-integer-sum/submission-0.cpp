class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int, unordered_set<int>> m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]].insert(i);
        }
        set<vector<int>> s;
        for(int i=0; i<nums.size()-2; i++){
            for(int j=i+1; j<nums.size()-1; j++){
                int val = 0 - (nums[i]+nums[j]);
                if(m.find(val) == m.end()) continue;
                for(const auto& indx : m[val]){
                    if(indx != i && indx != j){
                        vector<int> v = {nums[i], nums[j], nums[indx]};
                        sort(v.begin(),v.end());
                        s.insert(v);
                        break;
                    }
                }
            }
        }
        vector<vector<int>> res(s.begin(), s.end());
        return(res);
    }
};
