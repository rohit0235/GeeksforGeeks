class Solution {
  public:
    bool divby13(string &s) {
        // code here
        
    //   long long   int curr= 0;
    //     int n =s.size();
    //     for(int i=0;i<n;i++){ 
              
                
    //             int t = s[i]-'0';
    //             curr =curr*10+t;
                
    //     }          
    //     // cout<<curr<<endl;
    //     return curr%13==0;
    
    long long int ans =0;
    int n =s.size();
    if (n<=3) return  stoi(s)%13==0;
    
       int remender=0;
        for(int i=0;i<s.size();i++){
            if(remender!=0){
                int value=remender*10+(s[i]-'0');
                remender=value%13;
            }
            else{
            remender=(s[i]-'0');
            }
        }
        return remender==0;
    
     
    
     
    
    
    
    
    }
};