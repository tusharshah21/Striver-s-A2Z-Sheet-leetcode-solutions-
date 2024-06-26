// Link: https://leetcode.com/problems/valid-anagram/

// Time complexity: O(nlogn)
// Space complexity: O(1)

class Solution {
public:
    bool isAnagram(string str1, string str2) {
        if (str1.length() != str2.length())
            return false;
        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());
        return str1 == str2;
    }
};