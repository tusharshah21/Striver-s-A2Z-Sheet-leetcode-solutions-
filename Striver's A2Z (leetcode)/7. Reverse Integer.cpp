// Link: https://leetcode.com/problems/reverse-integer/

// Time complexity: O(log x)
// Space complexity: O(1)

class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while (x != 0) {
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
    }
};