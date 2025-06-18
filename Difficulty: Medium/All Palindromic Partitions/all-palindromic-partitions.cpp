class Solution {
  public:
            
        vector<vector<string>>result;
     bool ispali(string &s , int l ,int r){
            
            int i=l;
            int j=r;
            
            while (i<j){
                 
                 if (s[i]!=s[j]) return false;
                 i++;
                 j--;
            }
            return true;
           
     }
   
     void solve(string &s , int idx , vector<string>&curr){
             int n =s.size();
              if (idx==n) {
                   result.push_back(curr);
                   return ;
              }
              
              for(int i=idx ;i<s.size();i++){
                   
                     
                      if (ispali(s,idx , i)){
                           string check=s.substr(idx,i-idx+1);
                           curr.push_back(check);
                           solve(s,i+1,curr);
                           curr.pop_back();
                          
                      }
                      
              }
             
            
     }
    
    vector<vector<string>> palinParts(string &s) {
        // code here
         vector<string>curr;
         solve(s,0,curr);
          
          return result;    
        
    }
};