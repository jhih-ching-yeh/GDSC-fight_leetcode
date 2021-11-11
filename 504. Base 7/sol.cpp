//sol

class Solution {
public:
    string convertToBase7(int num) {
        bool is_negative = num < 0;
        num = abs(num);
        string ans;
        do {
            ans = std::to_string(num % 7) + ans;
            num /=7;
        } while (num > 0);
            
        if (is_negative) {
            ans = "-" + ans;
        }
        
        return ans;
    }
};
