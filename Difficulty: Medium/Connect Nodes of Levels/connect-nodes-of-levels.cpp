/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

class Solution {
  public:
    // Function to connect nodes at same level.
    Node* connect(Node* root) {
        // Your Code Here
          
            if (root==NULL) return NULL;
            
            queue<Node*>q;
            
            q.push(root);
            
            while (!q.empty()){
                 

                    vector<Node *>temp;
                    int n =q.size();
                    for(int i=0;i<n;i++){
                              
                      Node *front =q.front();
                     q.pop();
                     
                     
                      temp.push_back(front);
                      if (front->left) q.push(front->left);
                      if (front->right) q.push(front->right);
                     
                     
                    
                           
                    }
                    
                    for(int i=0;i<temp.size()-1;i++){
                         
                            temp[i]->nextRight=temp[i+1];
                           
                    }
                    
                    temp[temp.size()-1]->nextRight=NULL;
                        
                     
                     
            }
            
            
            return root;
            
            
    }
};