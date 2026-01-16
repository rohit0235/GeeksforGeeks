/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
   
    bool solve(Node *root, int mini, int maxi ){
         if(!root) return true;
         if(root->data<=mini || root->data>=maxi) return false;
         
          return solve(root->left,mini, root->data) && solve(root->right,root->data,maxi);     
         
    }
  
    bool isBST(Node* root) {
        // code here
        if(!root) return  true;
        
        return solve(root, INT_MIN , INT_MAX);
    }
};