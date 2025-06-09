class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not
    
    bool solve(Node *root , long long minval ,long long maxval){
         
            if (root==NULL)  return true;
            
            if (root->data <= minval  || root->data >=maxval){
                   return false;
            }
           
           
           return solve(root->left , minval , root->data) && solve(root->right , root->data , maxval) ;
    }
    
    
    
    bool isBST(Node* root) {
        // Your code here
        if (root==NULL) return true;
           
        return solve(root,LLONG_MIN, LLONG_MAX) ;
                
    }
};