// Link: https://leetcode.com/problems/count-good-numbers/

// Time complexity: O(logn)
// Space complexity: O(1)


class Solution {
public:
    int countGoodNumbers(long long n) {
    return modPow(4 * 5, n / 2) * (n & 1 ? 5 : 1) % kMod;
  }

 private:
  static constexpr int kMod = 1'000'000'007;

  long modPow(long x, long n) {
    if (n == 0)
      return 1;
    if (n % 2 == 1)
      return x * modPow(x, n - 1) % kMod;
    return modPow(x * x % kMod, n / 2);
  }
};