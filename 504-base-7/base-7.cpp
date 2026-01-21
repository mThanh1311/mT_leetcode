class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool isNegative = num < 0;
        num = abs(num);

        string result;
        while (num > 0) {
            int remainder = num % 7;
            result.insert(result.begin(), remainder + '0');
            num /= 7;
        }
        if (isNegative) {
            result.insert(result.begin(), '-');
        }
        return result;
    }
};