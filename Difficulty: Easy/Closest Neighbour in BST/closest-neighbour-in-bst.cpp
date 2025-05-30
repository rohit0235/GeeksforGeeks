/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
     int ans =-1;
     void  solve(Node *root, int k ){
          
          if (root==NULL) return ;
          
          if (root->data==k) {
             ans =k;
             return ;
          }
          if (root->data<k){
              if (root->data>ans)
                 ans= root->data;
                return  solve(root->right,k);
          }
          
          else if (root->data>k){
            return    solve(root->left,k);
          }
          
          
          
          
          
     }
      
  
  
  
    int findMaxFork(Node* root, int k) {
            
            if (root==NULL) return -1;
            solve(root,k);
            return ans;
        
    }
};