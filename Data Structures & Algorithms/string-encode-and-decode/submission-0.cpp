class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
            for(string str : strs){
                res += to_string(str.length()) + "%" + str;
            }
            cout<<"\nEncoded " << res << "\n";
            return(res);
    }

    vector<string> decode(string s) {
        cout<< " " << s << " ";
        vector<string> v;
        int i = 0;
        while(i < s.length())
        {
            int num = 0;
            string res = "";
            while(i < s.length() && s[i] != '%'){
                num = (num * 10) + (s[i] - '0');
                i++;
            }
            i++;
            if(num == 0){
                v.push_back(res);
            }
            else {
                res = s.substr(i, num);
                i += num;
                v.push_back(res);
            }
        }
        return(v);
    }
};
