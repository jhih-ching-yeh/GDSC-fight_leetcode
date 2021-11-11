//sol

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> f(n);
        f[0] = nums[0];
        
        for (int i=1;i<n;i++) {
            f[i] = max(f[i-1] + nums[i], nums[i]);
        }
        
        return *std::max_element(f.begin(), f.end());
    }
};
