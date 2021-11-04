//sol2

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> f(2, vector<int>(n+1, INT_MAX));
        
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=i;j++) {
                f[1][j] = triangle[i-1][j-1];
                if (i == 1 && j == 1) continue;
                else if (j == 1) f[1][j] += f[0][j];
                else if (j == i) f[1][j] += f[0][j-1];
                else f[1][j] += min(f[0][j-1], f[0][j]); 
            }
            std::swap(f[0], f[1]);
        }
        
        
        return *std::min_element(f[0].cbegin(), f[0].cend());
    }
};
