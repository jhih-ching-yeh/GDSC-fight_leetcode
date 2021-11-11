//sol 1.

class Solution {
public:
    bool checkRecord(string s) {
        int a = 0;
        int l = 0;
        for (char x : s) {
            if (x == 'A') a++;
            if (x == 'L') l++;
            else l = 0;  
            
        if(a > 1 || l > 2) return false;
        }
        return true;
    }
};

