/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
              
         std::vector<int> ans;
        if (root == nullptr) {
            return ans;
        }

        // Map to store (horizontal_distance, node_data)
        // std::map maintains sorted keys, which gives us left-to-right order
        std::map<int, int> mp;

        // Queue for level-order traversal: stores {node, horizontal_distance}
        std::queue<std::pair<Node*, int>> q;

        q.push({root, 0}); // Start with root at horizontal distance 0

        while (!q.empty()) {
            pair<Node*, int> current = q.front();
            q.pop();
            Node* node = current.first;
            int hd = current.second;
            if (mp.find(hd) == mp.end()) {
                mp[hd] = node->data;
            }
            if (node->left) {
                q.push({node->left, hd - 1});
            }
            if (node->right) {
                q.push({node->right, hd + 1});
            }
        }

        // Populate the answer vector from the map
        for (auto i : mp) {
            ans.push_back(i.second);
        }

        return ans;
              
            
    }
};