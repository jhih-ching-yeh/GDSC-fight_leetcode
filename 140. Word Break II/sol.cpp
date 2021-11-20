class Solution {
    public:
        vector<string> wordBreak(string s, vector<string>& wordDict) {
            unordered_set<string> dict(wordDict.cbegin(), wordDict.cend());
            return wordBreak(s, dict);
        }

    private:
        vector<string> append(vector<string> prefixes, string word) {
            vector<string> result;
            for (auto prefix:prefixes){ 
                result.push_back(prefix + " " + word);
            }
            return result;
        }

        vector<string> wordBreak(string s, unordered_set<string> dict) {
            if (mem_.count(s)) return mem_[s];

            vector<string> ans;
            if (dict.count(s)) ans.push_back(s);

            for (int j=1;j<s.length();j++) {
                string right = s.substr(j);
                if (dict.count(right) == false) continue;

                string left = s.substr(0, j);
                vector<string> left_ans = append(wordBreak(left, dict), right); 

                ans.insert(ans.end(), left_ans.begin(), left_ans.end());
            }

            mem_[s].swap(ans);
            return mem_[s];
        }

    private:
        unordered_map<string, vector<string>> mem_;
};
