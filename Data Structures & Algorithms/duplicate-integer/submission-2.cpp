#include <unordered_set>

using std::unordered_set;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        nums.reserve(nums.size());
        for (int num: nums)
        {
            if (!seen.insert(num).second)
                return true;
        }
        return false;
    }
};