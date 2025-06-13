/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
  
       bool solve(Node *l , Node *r){
             
               if (l==NULL && r==NULL) return true;
               if (l==NULL || r==NULL) return false;
                 
             if (l->data!=r->data) return false;
             
             
             return solve(l->left,r->right) || solve(l->right,r->left); 
             
       }
      
  
  
    bool isSymmetric(Node* root) {
        // Code here
        if (root==NULL)return true;
        
        
        return solve(root->left,root->right);
    }
};