/*Complete the function below

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){80
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
   
    bool solve(Node *root){
        
          
               if (root==NULL) return 1;
        if (!root->left && !root->right ){
              return 1;
         }

              
         int total =0;
         if (root->left ) total+=root->left->data;
         if (root->right ) total+=root->right->data;
           
         
             
         
         bool i = (total==root->data) && solve(root->left) && solve( root->right);
               

         return i;
         
           
          
           
    }
    int isSumProperty(Node *root) {
              
              if (root==NULL) return 1;
              
              
              return solve(root);
              
       
       
    }
};