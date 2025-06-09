class Solution {
  public:
    int countStrings(string &s) {
        // code here
        
              int c=0;
              unordered_map<char,int>mp;
            //   int total=1;
            //   mp[s[s.size()-1]]++;
              bool check=false;
              for(int i=s.size()-1;i>=0 ;i--){
                    //   cout<<c<<" ";
                       int curr=mp[s[i]];
                  
                       c+=(s.size()-i-1)-curr;
                       mp[s[i]]++;
                             if (mp[s[i]]>=2) check=true;
                  
                   
              }
              
            if (check) return c+1;
            else return c;
        
        
    }
};
