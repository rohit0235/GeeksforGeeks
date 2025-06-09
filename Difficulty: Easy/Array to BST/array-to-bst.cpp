/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val)
        : data(val)
        , left(nullptr)
        , right(nullptr) {}
};
*/

class Solution {
  public:
  
    Node *solve(vector<int>& nums, int l , int r){
         
          if (l>r) return NULL;
          int mid =l+(r-l)/2;
          Node *node = new Node(nums[mid]);
      node->left =solve(nums ,l,mid-1);
          node->right =solve(nums ,mid+1,r);
          
          return node;
          
          
         
    }
   
    Node* sortedArrayToBST(vector<int>& nums) {
 
                       int n =nums.size();
                       return solve(nums ,0,n-1);
                       
    }
};