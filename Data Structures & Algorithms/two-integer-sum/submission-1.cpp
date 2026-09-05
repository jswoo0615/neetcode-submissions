// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for (int i = 0; i < nums.size(); ++i) {
//             for (int j = i + 1; j < nums.size(); ++j) {
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};
//                 }
//             }
//         }
//     }
// };
class Solution {
    public:
        std::vector<int> twoSum(std::vector<int>& nums, int target) {
            std::unordered_map<int, int> num_to_idx;
            for (int i = 0; i < nums.size(); ++i) {
                int complement = target - nums[i];
                if (num_to_idx.find(complement) != num_to_idx.end()) {
                    return {num_to_idx[complement], i};
                }
                num_to_idx[nums[i]] = i;
            }
            return {};
        }
};