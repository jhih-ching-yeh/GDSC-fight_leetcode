//sol 2.

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        
        unordered_map<char, int> dx{{'L', -1},{'R', +1}};
        unordered_map<char, int> dy{{'D', -1},{'U', +1}};
        
        for (const char action: moves) {
            x+=dx[action];
            y+=dy[action];
        }
        
        return x==0 && y==0;
    }
};
