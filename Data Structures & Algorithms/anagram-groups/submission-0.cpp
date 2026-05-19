#include <array>
#include <string>
#include <unordered_map>
#include <vector>

using std::string;
using std::array;
using std::unordered_map;
using std::vector;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> frequencies;

        for (string str: strs)
        {
            string key;
            key.reserve(52);
            array<int, 26> temp{};

            for (char ch: str)
                temp[static_cast<int>(ch) - 'a']++;
            
            for (int elem: temp)
            {
                key += std::to_string(elem);
                key += '#';
            }

            frequencies[key].push_back(str);
        }

        vector<vector<string>> result;
        for (const auto& pair: frequencies)
            result.push_back(pair.second);

        return result;
    }
};
