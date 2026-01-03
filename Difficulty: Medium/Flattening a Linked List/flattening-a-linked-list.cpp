/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
      
         
         
         vector<int>t;
         Node *temp = root;
         
         while (temp){
                
               t.push_back(temp->data);
               Node *boot= temp->bottom;
               
               while (boot){
                    t.push_back(boot->data);
                    boot=boot->bottom;
               }
               temp=temp->next;
         }
         
          sort(t.begin(),t.end());
          
        //   for(auto i:t) cout<<i<<endl;
              Node *b = new Node(-1);
         Node *dummy = b;
           for(auto i:t){ 
             
                Node *k=  new Node(i);
                dummy->bottom =k;
                dummy=dummy->bottom;
           }
            // Node *te=b;
            //  while (te){
            //       cout<<te->data<<endl;
            //       te=te->b;
            //  }
         
         return b->bottom;
         
         
         
    }
};