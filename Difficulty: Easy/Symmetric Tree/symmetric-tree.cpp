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
   
    bool solve(Node *first , Node *second){
              
                 if (first==NULL && second==NULL)  return true;
                
                 if (!first || !second) return false;
                 
                 
                 if (first->data != second->data  ) return false;
                 
                 
                 return  solve(first->left ,second->right) && solve(first->right ,second->left);
           
    }
    bool isSymmetric(Node* root) {
        // Code here
          if (root==NULL) return true;
         
        return solve(root->left,root->right);
    }
};