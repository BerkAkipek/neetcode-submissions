#include <unordered_map>

using std::unordered_map;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> complements;
        complements.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if (complements.find(complement) != complements.end())
                return {complements[complement], i};
            
            complements[nums[i]] = i;
        }
    }
};
