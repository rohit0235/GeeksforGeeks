class Solution {
  public:
    int getLongestPrefix(string &s) {
           int n = s.length();
        for (int k = n - 1; k >= 1; k--) {
            bool valid = true;
            for (int i = k; i < n; i++) {
                if (s[i] != s[i % k]) {
                    valid = false;
                    break;
                }
            }
            if (valid) return k;
        }
        return -1;
              
    }
};