class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> um;
        for(int i=0; i<strs.size();i++){
            string a = strs[i];
            sort(a.begin(), a.end());
            um[a].push_back(i);
        }
        vector<vector<string>> res;
        for(auto it = um.begin(); it != um.end(); it++){
            vector<string> v;
            for(auto ind : it -> second){
                v.push_back(strs[ind]);
            }
            res.push_back(v);
        }
        return(res);
    }
};
