class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector <string> words;
        string word;
        stringstream ss(s);
        while (ss >> word) {
            words.push_back(word);
        }   
        if (pattern.length() != words.size()) {
            return false;
        }
        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;
        for (int i = 0; i < pattern.length(); i++) {
            char pChar = pattern[i];
            string wStr = words[i];
            if (p2w.count(pChar) == 0 && w2p.count(wStr) == 0) {
                p2w[pChar] = wStr;
                w2p[wStr] = pChar;
            } else {
                if (p2w[pChar] != wStr || w2p[wStr] != pChar) {
                    return false;
                }
            }
        }   
        return true;
    }
};