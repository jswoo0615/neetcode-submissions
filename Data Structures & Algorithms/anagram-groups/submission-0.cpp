class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> anagramMap;
        
        for (string s : strs) {
            string original = s;        
            sort(s.begin(), s.end());   // 문자열 정렬 ("eat" -> "aet")
            anagramMap[s].push_back(original); // "aet" 키의 리스트에 "eat" 추가
        }
        
        vector<vector<string>> result;
        for (auto& pair : anagramMap) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};
