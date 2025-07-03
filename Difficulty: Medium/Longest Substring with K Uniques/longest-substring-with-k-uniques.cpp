class Solution {
  public:
    int longestKSubstr(string &s, int k) {
           
            
            int l=0;
            int maxlength=INT_MIN;
            int n=s.size();
            unordered_map<int,int>mp;
            
            
            for(int r =0;r<n;r++){
                 
                 
                   mp[s[r]]++;
                   
                   while (l<=r && mp.size()>k){
                         
                         mp[s[l]]--;
                         if (mp[s[l]]==0) mp.erase(s[l]);
                         
                         l++;
                         
                   }
                   
                   
                  if (mp.size()==k)   maxlength =max(maxlength,r-l+1);
                 
                 
            }
            
            // if (mp.size()<)
            if (maxlength==INT_MIN) return -1;
            
            return maxlength;
           
           
    }
};