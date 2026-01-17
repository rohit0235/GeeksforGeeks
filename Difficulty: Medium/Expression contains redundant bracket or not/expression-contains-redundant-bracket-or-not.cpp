class Solution {
  public:
    bool checkRedundancy(string &s) {
        // code here
        stack<char>st;
        
        for(char i:s){
              
             if(i==')'){
              bool exp = false;
              
              
                  while (st.top()!='(' ){
                  
                       char top = st.top();
                       st.pop();
                       if(top=='+' || top=='-' || top=='*' || top=='/'){
                             exp =true;
                       }
                         
                  }
                  st.pop();
                //   cout<<exp<<endl;
                  
                  if(!exp) return true;
             }
             else{
                  st.push(i);
             }
              
        }
        
        return false;
    }
};
