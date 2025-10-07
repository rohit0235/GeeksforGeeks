/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
          if (root==NULL)  return {};
          
           map<int,int>mp;
          
          queue<pair<Node*,int>>q;
          q.push({root,0});
          
          while (!q.empty()){
                 
                  pair<Node*,int> front  = q.front();
                  q.pop();
                  mp[front.second]= front.first->data;
                  
                  if (front.first->left){
                        q.push({front.first->left, front.second-1});
                  }
                  if (front.first->right){
                        q.push({front.first->right, front.second+1});
                  }
          }
          
          vector<int>ans;
          for(auto i:mp){
               ans.push_back(i.second);
          }
          return ans;
          
    }
};