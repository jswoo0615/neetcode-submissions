class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> tempMap;

        for (std::string s : strs) {
            std::string original = s;
            std::sort(s.begin(), s.end());

            tempMap[s].push_back(original);
        }

        std::vector<std::vector<std::string>> result;
        for (auto& s : tempMap) {
            result.push_back(s.second);
        }
        return result;
    }
};
