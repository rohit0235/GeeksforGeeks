//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    bool iscbt(Node* tree,int index,int total){
          if (tree==NULL) return 1;
          if (index>=total) return 0;
          
          return  iscbt(tree->left,index*2+1,total) && iscbt(tree->right,index*2+2,total);
          

          
    }
    int count(Node *tree){
          
          if (tree==NULL) return NULL;
          return 1+count(tree->left)+count(tree->right);
    }
    
    
    bool maxheap(Node *tree){
          
          if (tree==NULL) return 1;
          
          if (tree->left) {
               
               if (tree->left->data>tree->data) return 0;
               
               if (!maxheap(tree->left)) return 0;
          }
          if (tree->right) {
               
               if (tree->right->data>tree->data) return 0;
               
               if (!maxheap(tree->right)) return 0;
          }
          return 1;
    }
    bool isHeap(struct Node* tree) {
        // code here
        // count of nodes
        // cbt property
        // 
        
        int total=count(tree);
        
        if (!iscbt(tree,0,total)) return false;
        
        
        
        return maxheap(tree);
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        if (ob.isHeap(root))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends