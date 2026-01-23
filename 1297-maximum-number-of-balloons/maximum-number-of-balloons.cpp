class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cnt[26] = {0};
        for (char c : text) {
            cnt[c - 'a']++;
        }

        int res = cnt['b' - 'a'] / 1;
        res = min(res, cnt['a' - 'a'] / 1);
        res = min(res, cnt['l' - 'a'] / 2);
        res = min(res, cnt['o' - 'a'] / 2);
        res = min(res, cnt['n' - 'a'] / 1);
        return res;
    }
};