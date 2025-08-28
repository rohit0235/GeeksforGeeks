// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
             
              vector<int>st(26,0);
              for(char i:pat)st[i-'a']++;
              vector<int>s2(26,0);
              for(int i=0;i<pat.size();i++){
                     if (st[txt[i]-'a']>0){
                           s2[txt[i]-'a']++;
                     }
              }
              int count =0;
              
            //   for(int i:s2) cout<<i<<" ";
            //   cout<<endl;
            //   for(int i:st) cout<<i<<" ";
              if (st==s2) count++;
                
                int n = pat.size();
              for(int i=n;i<txt.size();i++){
                        
                          if (st[txt[i-n]-'a']>0){
                                s2[txt[i-n]-'a']--;
                          }
                          if (st[txt[i]-'a']>0){
                                s2[txt[i]-'a']++;
                          }
                          
                          if (st==s2){
                               count++;
                          }
                      
              }
              
              return count;
                 
        
    }
};