class Solution {
  public:
  
    struct Node{
         map<char,Node*>children;
    };
    
    class Trie{
     
        Node *root;
           public:
        Trie(){
             root = new Node();
        }
        
        int solve(string s ){ 
              
              int n = s.size();
              int count =0;
              for(int i=0;i<n;i++){
                    
                    Node *temp = root;
                    for(int j=i;j<n;j++){
                         if (temp->children.find(s[j])==temp->children.end()){
                            //   count++;
                              temp->children[s[j]] = new Node();
                              count++;
                         }     
                         temp= temp->children[s[j]];
                    }
                    
          
                    
              }   
              return count;
        }
        
    
    };
  
    int countSubs(string& s) {
        
        Trie t;
        return t.solve(s);
        // code here
        // int n  = s.size();
        // unordered_set<string>st;
        // for(int i=0;i<n;i++){
        //      string curr ="";
        //      for(int j=i;j<n;j++){
        //           curr+=s[j];
        //           st.insert(curr);
        //      }
        // }
        
        // return st.size();
    }
};