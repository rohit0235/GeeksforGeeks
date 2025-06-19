/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
    int transformTree(Node* root) {
        // Base case: If the node is NULL, return 0
        if (!root) return 0;

        // Recursively calculate the sum of left and right subtrees
        int leftSum = transformTree(root->left);
        int rightSum = transformTree(root->right);

        // Save the original value of the current node
        int originalValue = root->data;

        // Update the current node's value to the sum of its left and right subtrees
        root->data = leftSum + rightSum;

        // Return the total sum of the subtree rooted at this node
        return originalValue + root->data;
    }

    void toSumTree(Node *node) {
        transformTree(node); // Start the transformation process
    }
};

