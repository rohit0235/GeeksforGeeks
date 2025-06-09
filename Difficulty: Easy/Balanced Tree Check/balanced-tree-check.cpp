/* A binary tree node structure

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
  public:
//   int lr=0;
//   int hr=0;
   bool ans=true;
  int  height(Node *root){
               if (root==NULL) return 0;

               
          int    lr=height(root->left);
             int  hr=height(root->right);
                      if ( ans &&  abs(hr-lr)>1) {
                   ans=false;
               }
       
               
               return 1+max(lr,hr);
        
   }
     
    bool isBalanced(Node* root) {
        // Code here
            
            if (root==NULL) return true;
         height(root);
         
         return ans;
            
            
            
    }
};