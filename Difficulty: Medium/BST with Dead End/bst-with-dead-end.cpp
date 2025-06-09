/*The Node structure is
class Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};*/

class Solution {
  public:
  
  
      void insert( Node *root ,unordered_set<int>&st){
           
            if (root==NULL) return;
            
            st.insert(root->data);
            insert(root->left , st);
            insert(root->right , st);
      }
     
     bool solve(Node *root ,    unordered_set<int>&st){   
        
             if (root==NULL) return false;
             if (root->left==NULL && root->right==NULL){
                     
                     int data=root->data;
                     if(st.find(data-1)!=st.end() &&st.find(data+1)!=st.end() ){
                         return true;
                     }
                     
                     return false;
                     
                  
              }

                return solve(root->left , st) || solve(root->right, st);
                
                
                
     }
     
    bool isDeadEnd(Node *root) {
        // Code here
        
        // unordered_map<int,bool>visited;
        unordered_set<int>st;
        st.insert(0);
        insert(root,st);
        return solve(root,st);
    }
};