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
    vector<vector<int>> verticalOrder(Node *root) {
        // Your code here
               
           map<int,vector<int>>mp;
               
               
                
       vector<vector<int>>result;
        
        queue<pair<Node*,int>>q;
        q.push({root,0});
        
        while (!q.empty()){
            
            int n =q.size();
            
            for (int i=0;i<n;i++){
                
                Node* fron=q.front().first;
                int s = q.front().second;
                
                
                
                mp[s].push_back(fron->data);
                q.pop();
                
                if (fron->left) q.push({fron->left,s-1});
                if (fron->right) q.push({fron->right,s+1});
                
            }
            
            
        }
        
        for(auto i:mp){
               
               vector<int>temp;
               
               for(auto k:i.second){
                    temp.push_back(k);
               }
                
              result.push_back(temp);
        }
        
        return result;
        
        
        
        
        
        
    }
};