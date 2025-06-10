// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
             vector<int> ans;
            stack<Node*> s;
            Node* curr = root;
        
            while (curr != nullptr || s.empty() == false) {
                
                // Reach the left most Node of the
                // curr Node
                while (curr != nullptr) {
                    
                    // Place pointer to a tree node on
                    // the stack before traversing
                    // the node's left subtree
                    s.push(curr);
                    curr = curr->left;
                }
        
                // Current must be NULL at this point
                curr = s.top();
                s.pop();
        
                ans.push_back(curr->data);
        
                // we have visited the node and its
                // left subtree.  Now, it's right
                // subtree's turn
                curr = curr->right;
            }
            
            return ans;
    }
};