/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    bool isleaf(Node *root){
         if (root->left==NULL && root->right==NULL){
              return true;
         }
         
         return false;
    }
    void lsolve(Node *root, vector<int>&res){
           if (root==NULL) return;
           
           
           Node *curr=root->left;
           
           while (curr){
              if (!isleaf(curr))  res.push_back(curr->data);
                if (curr->left) curr=curr->left;
                else curr=curr->right;
           }
           
           
    }
  
    void rsolve(Node *root, vector<int>&res){
           if (root==NULL) return;
           
           
           Node *curr=root->right;
         vector<int>r;
         
           while (curr){
               if (!isleaf(curr))     r.push_back(curr->data);
                if (curr->right) curr=curr->right;
                else curr=curr->left;
           }
           
          reverse(r.begin(),r.end());
          
          for(int i:r){
               res.push_back(i);
          }
           
           
    }
  
    void osolve(Node *root, vector<int>&res){
             if (root==NULL) return;
           
           
             if (root->left==NULL && root->right==NULL) res.push_back(root->data);
             
             osolve(root->left,res);
             osolve(root->right,res);
    }
  
    vector<int> boundaryTraversal(Node *root) {
        // code here
                      if (root==NULL) return {};
           vector<int>res;
           res.push_back(root->data);
           if (root->left==NULL && root->right==NULL) return res;
          lsolve(root,res);    
          osolve(root,res);
          rsolve(root,res);
   
     
          
          return res;
        
        
    }
};