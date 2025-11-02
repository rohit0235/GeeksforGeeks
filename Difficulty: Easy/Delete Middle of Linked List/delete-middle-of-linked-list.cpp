/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
         Node *s = head;
         Node *f = head;
         Node *prev= NULL;
          if (head->next == NULL) {
        delete head;
        return NULL;
    }
         while (f && f->next){
            prev= s;
            s= s->next;
            f= f->next->next;
             
         }
        //  cout<<s->data;
         
       prev->next = s->next;

         delete s;
         return head;
         
    }
};