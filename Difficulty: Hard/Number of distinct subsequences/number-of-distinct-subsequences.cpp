class Solution {
  public:
  const int MOD = 1e9+7;
    int distinctSubseq(string &str) {
        // code here
        int n = str.size();
        
        vector<int>dp(n+1,-1);
        dp[0]=1;
        vector<int>ch(26,-1);
        for(int i=1;i<=n;i++){
            
             dp[i] = (2*dp[i-1])%MOD;
              int idx = str[i-1]-'a';
             if (ch[idx]!=-1){
                   dp[i] =( dp[i] - dp[ch[idx]]+MOD)%MOD;
             }
             ch[idx] = i-1;
        }
        return dp[n];
    }
};