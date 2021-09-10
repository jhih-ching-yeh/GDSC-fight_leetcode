//sol 

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int area = 0;
        int conn = 0;
        
        for (int x=0;x<m;x++){
            for (int y=0;y<n;y++){
                if (grid[x][y] == 1) {
                    area++;
                    if (x > 0 && grid[x-1][y] == 1) conn++;
                    if (x < m-1 && grid[x+1][y] == 1) conn++;
                    if (y > 0 && grid[x][y-1] == 1) conn++;
                    if (y < n-1 && grid[x][y+1] == 1) conn++;
                }
            }
        }
        
        return area * 4 - conn;
    }
};



