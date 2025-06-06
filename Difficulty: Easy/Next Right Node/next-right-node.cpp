/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
    Node *nextRight(Node *root, int key) {
        // code here
          
        // vector<vector<int>>ans;
             Node *ans = new Node(-1);
        if (root==NULL) return ans;
        
        queue<Node*>q;
        q.push(root);
        bool k=false;
        while (!q.empty()){
            
            int n =q.size();
        
            for (int i=0;i<n;i++){
                Node* fron=q.front();
                if (fron->data==key ) k=true;
                else if (k==true ) return fron;
                // temp.push_back(fron->data);
                q.pop();
                
                if (fron->left) q.push(fron->left);
                if (fron->right) q.push(fron->right);
                
            }
            k=false;
        
        }
   
        return ans;
    }
};