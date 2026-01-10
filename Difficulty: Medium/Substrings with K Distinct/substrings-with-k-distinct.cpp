class Solution {
  public:
int countAtMostK(string& s, int k) {
        if (k <= 0) return 0;
        int l = 0, count = 0, distinct = 0;
        int n = s.size();
        int freq[128] = {0};

        for (int r = 0; r < n; r++) {
            if (freq[s[r]] == 0) distinct++;
            freq[s[r]]++;

            while (distinct > k) {
                freq[s[l]]--;
                if (freq[s[l]] == 0) distinct--;
                l++;
            }
            count += (r - l + 1);
        }
        return count;
    }
    int countSubstr(string& s, int k) {
           
   return    countAtMostK(s,k)-countAtMostK(s,k-1);
    }
};