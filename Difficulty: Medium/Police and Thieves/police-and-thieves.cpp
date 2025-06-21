class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
              
              int n =arr.size();
              set<int>s;
              for(int i=0;i<n;i++){
                if (arr[i]=='T')    s.insert(i);
                    
              }
              
              
              if (s.empty()) return 0;
              int ans =0;
   for (int i = 0; i < n; ++i) {
        if (arr[i] == 'P') {
            // Find the first 'T' with an index >= (i - k)
            auto it = s.lower_bound(i - k);

            // Check if 'it' is a valid iterator and if the found 'T' is within (i + k) range
            // Also, ensure the 'T' is not to the left of i - k (which lower_bound already handles)
            // and within the maximum allowed distance k.
            if (it != s.end()) { // Found at least one 'T' >= i-k
                int t_idx = *it;
                if (t_idx <= i + k) { // The found 'T' is within the right boundary
                    // This 't_idx' is the smallest index 'T' >= (i-k) AND <= (i+k)
                    // It's the best candidate to catch.
                    ans++;
                    s.erase(it); // Remove the caught 'T'
                }
            }
        }
    }
    return ans;
            //   return ans;/
            //   queue<int>q;
            //   int ans =0;
            //   for(int i=n-1;i>=0;i--){
                     
            //          while (!q.empty() && abs(q.front()-i)>k ){
            //               q.pop();
            //          }
            //          if (arr[i]=='T'){
            //              q.push(i);
            //          }
            //          if (arr[i]=='P'){
            //                   if  (!q.empty() && abs(q.front()-i)<=k ){
            //                       ans++;
            //                       q.pop();
            //                  }
            //          }
      
            //   }
            //   queue<int>q2;
            //   int ans1 =0;
            //   for(int i=0;i<n;i++){
                     
            //          while (!q2.empty() && abs(q2.front()-i>k) ){
            //               q2.pop();
            //          }
            //          if (arr[i]=='T'){
            //              q2.push(i);
            //          }
            //          if (arr[i]=='P'){
            //                   if  (!q2.empty() && abs(q2.front()-i<=k) ){
            //                       ans1++;
            //                       q2.pop();
            //                  }
            //          }
      
            //   }
            //     cout<<ans<<" "<<ans1<<endl;
            //     return max(ans,ans1);
            //   return ans;
    }
};