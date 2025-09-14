class Solution {
public:
    string reverseString(vector <char>& s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return string(s.begin(), s.end());
    }
};