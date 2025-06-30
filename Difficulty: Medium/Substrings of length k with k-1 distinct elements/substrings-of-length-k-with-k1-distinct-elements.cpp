class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
        // Given a string s consisting only lowercase alphabets and an integer k.
        // Find the count of all substrings of length k which have exactly k-1 distinct characters.
         
         int n =s.size();
         int count =0;
          unordered_map<int,int>mp;
         for(int i=0;i<k;i++){
              mp[s[i]]++;
         }
         
         if (mp.size()==k-1) count++;
         
         
         for(int i=k;i<n;i++){
               
                 mp[s[i]]++;
                 
                 mp[s[i-k]]--;
                 
                 if (mp[s[i-k]]==0) mp.erase(s[i-k]);
                    if (mp.size()==k-1) count++;
                 
               
         }
            // if (mp.size()==k-1) count++;
            
            return count;
    }
};