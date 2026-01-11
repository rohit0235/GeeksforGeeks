class Solution {
  public:  int n,m;
     
     
        vector<vector<int>>dp;
    int solve(string &s1, string &s2, int i, int j){
           
            if(j>=m){
                 return i;
            }
            if(i>=n) return INT_MAX;
    
           if(  dp[i][j]!=-1) return  dp[i][j];
   
            int first = INT_MAX;;
            // int second = INT_MAX;;
            if(s1[i]==s2[j]){
                    first = solve(s1,s2,i+1,j+1);
            }
           else    first = solve(s1,s2,i+1,j);
             
             return dp[i][j]=  first;
            
           
          
    }
    
    string minWindow(string& s1, string& s2) {
            
             n = s1.size();
             m = s2.size();
                dp.resize(n+1,vector<int>(m+1,-1));
            int length = INT_MAX;  
            int start = INT_MAX;
             for(int i=0;i<n;i++){
                  
                  if(s1[i]==s2[0]){
                      
                                     int end = solve(s1,s2,i+1,1);
                     if(end!=INT_MAX){  
                         
                         if(length>(end-i)){
                               
                                length = end-i;
                               start =i;
                         }
                     }
                  }   
      
                     
             }
            
             
          
           if(start ==INT_MAX) return "";
           
           
           return s1.substr(start,length);
           
           
    }
};
