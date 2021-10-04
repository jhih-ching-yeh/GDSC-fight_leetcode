//sol 2

class Solution {
public:
    int climbStairs(int n) {
        f = vector<int>(n+1, 0);
        return numOfSolution(n);
    }
    
private:
    int numOfSolution(int n) {
        if(n <= 1) return 1;
        if(f[n] > 0) return f[n];
        f[n] = numOfSolution(n-1) + numOfSolution(n-2);
        return f[n];
    }
    vector<int> f;
};
