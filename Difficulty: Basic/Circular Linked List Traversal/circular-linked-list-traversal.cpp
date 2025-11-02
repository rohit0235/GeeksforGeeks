/* structure for a node
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head) {
          Node * temp = head;
          int c =0;
          while (temp){
               if (c>0 && temp==head)break;
               cout<<temp->data<<" ";
               temp = temp->next;
                c++;
              
          }
}