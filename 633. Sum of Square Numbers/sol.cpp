//sol

class Solution {
public:
    bool judgeSquareSum(int c) {
        int m = sqrt(c);
        
        for(long i=0;i<=m;i++) {
            long j = round(sqrt(c - i*i));
            if(i*i + j*j == c) return true;
        }
        return false;
    }
};
