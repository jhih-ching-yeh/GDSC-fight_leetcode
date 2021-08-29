//sol 1.

class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        
        unordered_map<char, int> dx{{'L', -1},{'R', +1}};
        unordered_map<char, int> dy{{'D', -1},{'U', +1}};
        
        for (const char action: moves) {
            switch(action) {
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
                case 'R':
                    x++;
                    break;
                case 'L':
                    x--;
                    break;         
            }
        }      
        return x==0 && y==0;
    }
};
