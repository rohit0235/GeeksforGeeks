class Solution {
  public:
    
    stack<char>st1;
    stack<char>st2;
    string s="";
    
    void append(char x) {
        // append x into document
        st1.push(x);
        // s.push_back(x);
        
    }

    void undo() {
        
        //  while (!st1.empty()){
        //       cout<<st1.top();
        //       st1.pop();
        //  }
        //  cout<<endl;
           if(!st1.empty()){
                int top =st1.top();
                st1.pop();
                
                st2.push(top);
                
           }
    }

    void redo() {
        // redo changes
        if(!st2.empty()) {
        int top =st2.top();
        st2.pop();
        st1.push(top);
        }
    }

    string read() {
        // read the document
        
         string ans ="";
         
         stack<char>st3=st1;
         while (!st3.empty()){
              ans+=st3.top();
              st3.pop();
         }
         reverse(ans.begin(),ans.end());
         return ans;
        
    }
};