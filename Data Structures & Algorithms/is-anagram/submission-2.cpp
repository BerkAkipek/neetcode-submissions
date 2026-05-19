#include <unordered_map>

using std::unordered_map;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        
        unordered_map<char, int> seen;

        for (char ch: s)
            seen[ch]++;
        for (char ch: t)
            seen[ch]--;

        for (const auto& [ch, count] : seen)
        {
            if (count != 0)
                return false;
        }
        return true;
    }
};
