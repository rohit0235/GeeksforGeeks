class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        
        stack<char>s;
        if (x.size()%2!=0){
            return false;
        }
    
        for (int i=0;i<x.size();i++){
                 
           if (x[i]=='(' || x[i]=='{'  || x[i]=='['  ) {
               s.push(x[i]);
           }
           else {
               if (s.empty()){
                     return false;
                   
                }
               if ((s.top()=='[' && x[i]!=']' )|| (s.top()=='{' && x[i]!='}') || (s.top()=='(' && x[i]!=')' )){
                   return false;
                  
               }
               else{
                   s.pop();
               }
               
           }
        
        }
        return s.empty();
        
        
    }

};
