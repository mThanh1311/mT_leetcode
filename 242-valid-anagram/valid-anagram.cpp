class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> char_count;

        for (char c : s) {
            char_count[c]++;
        }

        for (char c : t) {
            if (char_count.find(c) == char_count.end() || char_count[c] == 0) {
                return false;
            }
            char_count[c]--;
        }

        return true;
    }
};