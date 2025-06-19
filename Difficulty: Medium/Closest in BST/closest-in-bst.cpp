/*
Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to find the least absolute difference between any node
    // value of the BST and the given integer.
    
    int ans =INT_MAX;
    
    int minDiff(Node *root, int K) {
        // Your code here
          
           if (root==NULL) return INT_MAX;
           
           ans = min(ans , abs(root->data-K));
           
           
           minDiff(root->left , K);
           minDiff(root->right , K);
           
           return ans ;        
        
    }
};