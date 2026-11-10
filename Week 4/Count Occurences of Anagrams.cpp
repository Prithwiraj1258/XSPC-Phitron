https : // www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1?_gl=1*2hl6h9*_ga*MTYxMTcwOTY2OC4xNjYwMzk1MzY0*_ga_DWCCJLKX3X*MTY5Njc3NDQzNi4xLjEuMTY5Njc3NDUwNy4wLjAuMA..

        class Solution
{
public:
    int search(string &pat, string &txt)
    {
        int n = txt.size();
        int k = pat.size();
        vector<int> p(26, 0), t(26, 0);
        for (int i = 0; i < k; i++)
        {
            p[pat[i] - 'a']++;
            t[txt[i] - 'a']++;
        }
        int ans = 0;
        if (p == t)
        {
            ans++;
        }
        for (int i = k; i < n; i++)
        {
            t[txt[i - k] - 'a']--;

            t[txt[i] - 'a']++;
            if (p == t)
            {
                ans++;
            }
        }
        return ans;
    }
};