//sol 1

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        
        return std::max(nums[0]*nums[1]*nums[2], nums[0]*nums[n-1]*nums[n-2]);
    }
};





