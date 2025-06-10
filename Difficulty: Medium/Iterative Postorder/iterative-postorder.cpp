// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* node) {
               
            stack<Node*>s;

        if(!node)return {};

        s.push(node);

        vector<int>v;

        while(s.size()>0){

            Node *node=s.top();

            v.push_back(node->data);

            s.pop();

            if(node->left){

                s.push(node->left);

            }

            if(node->right){

                s.push(node->right);

            }

        }

        reverse(v.begin(),v.end());

        return v;
              
   
    }
};