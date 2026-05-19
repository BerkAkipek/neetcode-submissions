#include <unordered_map>
#include <vector>
#include <iostream>

using std::unordered_map;
using std::vector;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq_map{};

        for (int num: nums)
            freq_map[num]++;

        vector<vector<int>> bucket(nums.size() + 1);
        for (const auto& pair: freq_map)
            bucket[pair.second].push_back(pair.first);

        vector<int> result;
        for (int i = nums.size(); i > 0; i--)
        {
            if (bucket[i].size() != 0)
            {
                for (int num: bucket[i])
                {
                    result.push_back(num);
                    if (result.size() == k)
                        return result;
                }
            }
        }
    }
};
