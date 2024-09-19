// Link: https://leetcode.com/problems/assign-cookies/

// Time complexity: O(m logn)
// Space complexity: O(1)

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        int l=0;
        int r=0;
        while(l<m && r<n){
            if(g[r]<=s[l])
                r=r+1;
            l=l+1;
        }
        return r;
    }
};