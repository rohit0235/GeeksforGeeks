/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    // Function to check if S is a subtree of tree T.
    
    bool same(Node* T, Node* S){
           
           if (T==NULL && S==NULL) return true;
           if (T==NULL) return false;
           if (S==NULL) return false;
           
           
           if (T->data!=S->data) return false;
           
           return same(T->left,S->left) && same(T->right,S->right);
           
           
    }
    bool isSubTree(Node* T, Node* S) {
        // Your code here
               
              if (S==NULL) return 1;
              if (T==NULL) return 0;
              if (same(T,S )) return true;
              if ( isSubTree(T->left,S) ||isSubTree(T->right,S)){
                return true;
               }
            
             return false;
              
               
             
              
        
        
    }
};