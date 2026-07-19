class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> Freq;
        for (int num : nums) {
            Freq[num]++;
        }

        std::vector<std::vector<int>> bucket(nums.size() + 1);
        for (auto& pair : Freq) {
            int num = pair.first;
            int count = pair.second;
            bucket[count].push_back(num);
        }

        std::vector<int> result;
        for (int i = bucket.size() - 1; i >= 0 && result.size() < k; --i) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    break;
                }
            }
        }
        return result;
    }
};
