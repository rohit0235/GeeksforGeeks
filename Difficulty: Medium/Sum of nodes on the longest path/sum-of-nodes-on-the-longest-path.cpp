/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    
    vector<int>ans;
    int maxsize=0;
    void solve(Node *root, vector<int>&path){
          
          if (root==NULL) return ;
          
          path.push_back(root->data);
          
          if (root->left ==NULL && root->right==NULL) {
                
                if  (path.size()>maxsize){
                      ans=path ;
                      maxsize=path.size();
                }else if (path.size()==maxsize){
                      
                      int curr =accumulate(path.begin(),path.end(),0);
                      int curr2 =accumulate(ans.begin(),ans.end(),0);
                      
                      if (curr>curr2){
                           ans=path;
                      } 
                }
                
          }
          
          solve(root->left , path );
          solve(root->right , path );
          
          path.pop_back();
         
         
    }
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
            
            vector<int>path;
            if (root==NULL) return 0;
            solve(root, path );
            
            
            int sum  =  accumulate(ans.begin(),ans.end(),0);
            return sum;
        
        
        
        
    }
};