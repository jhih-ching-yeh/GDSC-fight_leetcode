//sol

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.cbegin(), wordDict.cend());
        int n = s.length();
        s = " " + s;
        vector<int> f(n+1, 0);
        f[0] = 1;
        
        for (int i=1;i<=n;i++) {
            for (int j=0;j<i;j++) {
                if (f[j] == 1) {
                    const string sub_str = s.substr(j+1, i-j);
                    if (dict.count(sub_str)) {
                        f[i] = 1;
                        break;
                    }    
                }    
            }
        }
        
        return f[n];
    }
};
