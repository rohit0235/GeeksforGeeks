class Solution {
  public:
    int countAtMostK(vector<int> &s, int k) {
        // code here
        
                      int l=0;
            int maxlength=0;
            int n=s.size();
            unordered_map<int,int>mp;
            
            
            for(int r =0;r<n;r++){
                 
                 
                   mp[s[r]]++;
                   
                   while (l<=r && mp.size()>k){
                         
                         mp[s[l]]--;
                         if (mp[s[l]]==0) mp.erase(s[l]);
                         
                         l++;
                         
                   }
                   
                   
                     maxlength+=(r-l+1);
                 
                 
            }
            return maxlength;
           
    }
};