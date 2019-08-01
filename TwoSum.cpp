#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> data;
        vector<int> result;
        int size = (int)nums.size();
        for (int i = 0; i < size; ++i) {
            int diff = target - nums[i];
            data[diff] = i;
        }
        for (int i = 0; i < size; ++i) {
            if (data.find(nums[i]) != data.end() && i != data[nums[i]]) {
                result.push_back(i);
                result.push_back(data[nums[i]]);
                break;
            }
        }
        return result;
    }
};