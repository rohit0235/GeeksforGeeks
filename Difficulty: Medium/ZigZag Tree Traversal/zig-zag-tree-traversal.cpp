/*
class Node {
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
    vector<int> zigZagTraversal(Node* root) {
        // code here
                if (!root) return {};
                vector<int>ans;
                queue<Node*>q;
                q.push(root);
                bool flag = false;
                while (!q.empty()){
                     
                      
                        int n = q.size();
                        
                        vector<int>lev;
                        for(int i=0;i<n;i++){
                             Node* top = q.front();
                             q.pop();
                             lev.push_back(top->data);
                             if (top->left){
                                  q.push(top->left);
                             }
                             if (top->right){
                                  q.push(top->right);
                             }
                               
                        }
                        
                        if (flag){ 
                             reverse(lev.begin(),lev.end());
                        }     
                        
                        ans.insert(ans.end(),lev.begin(),lev.end());
                        
                        flag= !flag;
                    
                       
                }
                
                return ans;
    }
};