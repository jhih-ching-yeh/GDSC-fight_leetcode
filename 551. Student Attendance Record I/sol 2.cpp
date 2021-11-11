//sol 2.

class Solution {
public:
    bool checkRecord(string s) {
        return !std::regex_search(s, std::regex("A.*A|LLL"));
    }
};
