class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int index1 = 0;
        int index2 = numbers.size() - 1;

        while (index1 < index2) {
            int current_sum = numbers[index1] + numbers[index2];
            if (current_sum == target) {
                return {index1 + 1, index2 + 1};
            } else if (current_sum < target) {
                index1++;
            } else {
                index2--;
            }
        }
        return {};
    }
};
