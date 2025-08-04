class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
                    
            int n = s.size();
            
            int i=0;
            int j=n-1;
            
             while (!isalnum(s[i])){
                         i++;
            }
                  
          while (!isalnum(s[j])){
                         j--;
          }
            
            while (i<j){
                
                     if (tolower(s[i])!=tolower(s[j])) return false;
                     if (isalnum(s[i])) i++;
                     if (isalnum(s[j])) j--;
                    while (!isalnum(s[i])  ){
                         i++;
                    }               
                  
                    while (!isalnum(s[j])){
                         j--;
                    }
                   
                 
                    
            }
            
            return true;
            
        
    }
};