class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> num_set(nums.begin(), nums.end());

        int long_streak = 0;

        for (int num : nums) {
            if (num_set.count(num - 1) == 0) {
                int curr_num = num;
                int curr_streak = 1;

                while (num_set.count(curr_num + 1) == 1) {
                    curr_num += 1;
                    curr_streak += 1;
                }

                long_streak = std::max(long_streak, curr_streak);
            }
        }
        return long_streak;
    }
};
