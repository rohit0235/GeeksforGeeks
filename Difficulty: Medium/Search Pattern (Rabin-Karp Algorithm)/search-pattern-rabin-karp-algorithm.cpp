class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
              
              int hash= 0;
              
              for(char i:pat){
                      hash=hash+(i-'a');
                    
              }
            //   cout<<hash<<endl;
             int n =txt.size();
             int m =pat.size();
             vector<int>ans;
             int curr=0;
             for(int i=0;i<m;i++){
                  curr+=(txt[i]-'a');
             }
              if (curr==hash){
                            
                            string check =txt.substr(0,m);
                            if (check==pat) {
                                 ans.push_back(1);
                            }
                            
                            
                            
              }
                  
             
             
             for(int i=m;i<n;i++){
                  
                     curr=curr+(txt[i]-'a');
                     curr=curr-(txt[i-m]-'a');
                                // cout<<curr<<endl;
                  if (curr==hash){
                 
                            string check =txt.substr(i-m+1,m);
                            // cout<<check<<" ";
                            if (check==pat) {
                                 ans.push_back(i-m+2);
                            }
                         
                            
                            
                    }
                  
             }
             
             
             return ans;
                
              
    }
};