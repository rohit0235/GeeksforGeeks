/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
          vector<int>ans;
    
    void solve(Node *root, int i, vector<int>&ans){
         if(root==NULL) return ;
         
         if(i>ans.size()){
                ans.push_back(root->data);
         }
         
         solve(root->left, i+1, ans);
         solve(root->right, i+1, ans);
    }
   
    vector<int> leftView(Node *root) {
        // code here
 
         solve(root,1,ans);
         return ans;
    }
};