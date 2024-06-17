// Code

class Solution 
{
public:
    int longestPalindrome(string s) 
    {
        unordered_set<char> hash;

        int p = 0; 
        int l = 0;

        for (char c : s)
        {
            if(hash.count(c) > 0)
            {
                p++;
                hash.erase(c);
            }
            else
                hash.insert(c);
        }

        if(hash.size())
            l = 1;
        else
            l = 0;

        l += (2 * p);

        return l;
    }
};
