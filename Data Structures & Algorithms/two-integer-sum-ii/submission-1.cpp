class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // 1. 왼쪽 / 오른쪽
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            // 2. 범위 좁혀가면 target과 합이 같은지 확인
            if (numbers[left] + numbers[right] == target) {
                return {left + 1, right + 1};
            } else if (numbers[left] + numbers[right] > target) {
                right--;
            } else {
                left++;
            }
        }
        return {};
    }
};
