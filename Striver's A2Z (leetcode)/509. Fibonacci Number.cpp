// Link: https://leetcode.com/problems/fibonacci-number/

// Time complexity: O(n)
// Space complexity: O(1)

class Solution
{
public:
    int fib(int n)
    {
        int zero = 0;
        int first = 1;
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        int num;
        int count = 2;
        for (count; count <= n; count++)
        {
            num = zero + first;
            zero = first;
            first = num;
        }
        return num;
    }
};