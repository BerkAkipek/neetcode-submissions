#include <unordered_map>

using std::unordered_map;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++)
        {
            if (seen[nums[i]] == 0)
            {
                seen[nums[i]]++;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};