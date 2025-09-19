class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        int n = s.size();
        stack<char>st;
        
        //()))()()((())
        
        // int open = 0;
        // int close = 0;
        
        
        // for(char i:s){
        //       if (i==')')close++;
        //       else open++;
        // }
        // return abs(open-close);
        
        int ans =0;
    for(char i:s){
            
             if (i==')'){
                   if (st.empty()) ans++;
                   else st.pop();
             }
             else{
                  st.push(i);
             }
          
           
    }
    
    return ans+st.size();
        
        
    }
};