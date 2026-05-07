class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> um;
        for(auto i : s){
            um[i] ++;
        }
        for(auto i : t){
            um[i]--;
        }
        for( const auto& i : um ){
            if(i.second != 0 ) return(false); 
        }
        return(true);
    }
};
