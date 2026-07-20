class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> num_set(nums.begin(), nums.end());

        int long_idx = 0;

        for (int num : num_set) {
            int curr_idx = 0;
            int curr_num = 0;

            if (num_set.count(num - 1) == 0) {
                curr_num = num;
                curr_idx = 1;

                while (num_set.count(curr_num + 1) == 1) {
                    curr_idx += 1;
                    curr_num += 1;
                }

                long_idx = std::max(long_idx, curr_idx);
            }
        }
        return long_idx;
    }
};
