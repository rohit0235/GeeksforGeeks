class Solution {
  public:
  
  
  static bool cmp(string &a ,string &b){
      
      if (a.size()==b.size()){
            return a<b;
      }
       else{
              return a.size()>b.size();
       }
     
  }
    string longestString(vector<string> &arr) {
             
             
               unordered_set<string>st;
               for(auto i:arr) st.insert(i);
               
               sort(arr.begin(),arr.end(),cmp);
               
               for(int i=0;i<arr.size();i++){
                    
                          string j = "";
                          bool flag =true;
                          for(int k=0;k<arr[i].size();k++){
                                  
                                   j+=arr[i][k];
                                   
                                   if (st.find(j)==st.end()){
                                         flag =false;
                                        break;
                                   }
                                   
                                
                          }
                          
                          if (flag) return arr[i];
                       
                      
               }
               
               return arr[arr.size()-1];
              
             
        
    }
};