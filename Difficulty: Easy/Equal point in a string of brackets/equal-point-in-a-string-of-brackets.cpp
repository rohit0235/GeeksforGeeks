// User function Template for Java

class Solution {
  public:

    int findIndex(string& str) {
        // Your code goes here
           
           int n =str.size();
           
           int close =0;
           
           for(char i:str){
               if (i==')') close++;
           }
           
           int open =0;
           if (open==close){
                return 0;
                }
           for(int i=0;i<str.size();i++){
                
                if (i=='(')open++;
                 else close--;
                
                if (open==close) return i+1;
           }
        
        
        
    }
};