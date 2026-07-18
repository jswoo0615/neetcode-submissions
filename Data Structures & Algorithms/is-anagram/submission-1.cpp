class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        std::unordered_map<char, int> sFreq;
        std::unordered_map<char, int> tFreq;

        for (char a : s) {
            sFreq[a]++;
        }

        for (char b : t) {
            tFreq[b]++;
        }

        return sFreq == tFreq;
    }
};
