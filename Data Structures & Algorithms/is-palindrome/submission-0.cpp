class Solution {
public:
    bool isPalindrome(string s) {
        string final = "";
        for(char c : s){
            if(isalnum(c)) final += c; 
        }
        cout<< final <<" ";
        for(int i=0; i<final.length()/2; i++){
            if(tolower(final[i]) != tolower(final[final.length()-1-i])) return(false);
        }
        return(true);
    }
};
