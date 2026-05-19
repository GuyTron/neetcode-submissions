class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int num = nums[0], cnt = 0;
        if(num == 0) cnt++;
        for(int i=1; i<n; i++){
            if(nums[i] == 0) cnt++;
            else {
                num = num * nums[i];
            }
        }
        vector<int> v(n, 0);
        if(cnt == 1){
            for(int i = 0; i<n; i++){
                if(nums[i] == 0) v[i] = num;
            }
        }
        else if(cnt < 1){
            for(int i = 0; i<n; i++){
                v[i] = num/nums[i];
            }
        }
        return(v);
    }
};
