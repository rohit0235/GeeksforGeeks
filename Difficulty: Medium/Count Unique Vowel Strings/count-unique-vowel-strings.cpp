class Solution {
  public:
  
    int fact(int n){
          
            if (n==0) return 1;
            if (n==1) return 1;
            
            return n*fact(n-1);
          
    }
    int vowelCount(string& s) {
          
              
              unordered_map<char,int>mp;
              for(char i:s) {
                  
                if (i=='a' || i=='e' || i=='o' || i=='u' || i=='i')   
                       mp[i]++;
              
              }
              
                 
              int n =mp.size();
              if (n==0) return 0;
              int ans =fact(n);
             for(auto i:mp){
                  ans  *= (i.second);
             }
             
             return ans;
        
    }
};