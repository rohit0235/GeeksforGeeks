class Solution {
  public:
    vector<int> asciirange(string& s) {
        // code here
        int n =s.size();
        
        
        vector<int>prefsum (n,0);
        for(int i=0;i<n;i++){
              if (i==0) {
                //   cout<<(int)s[i];
                   prefsum[i] = (int)s[i];
              }
              else{
                    prefsum[i] = (int)prefsum[i-1]+ (int)s[i];
              }
             
        }
        
        
        
        
        vector<int>f(26,-1);
        vector<int>l(26,-1);
        
    
        for(int i=0;i<n;i++){ 
                 int index = s[i]-'a';
               if (f[index]==-1){
                 f[index] = i;   
               }   
               else{
                     l[index] = i;   
               }
        }
        
        // for(int i:f)cout<<i<<" ";
        // for(int i:prefsum)cout<<i<<" ";
        // cout<<endl;
       vector<int>ans;
        for(int idx=0;idx<n;idx++){
             
              int i = s[idx]-'a';
              if (f[i]!=-1 && l[i]!=-1){
                    
                      int cj=  prefsum[l[i]-1]-prefsum[f[i]];
                      if (cj!=0)
                       ans.push_back(cj);
                       f[i]=-1;
                       l[i]=-1;
                    
              }
        }
        
        
        return ans ;
        
        
        
        
        
        
        
    }
};