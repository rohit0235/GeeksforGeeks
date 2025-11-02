/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *pairwiseSwap(Node *head) {
        // code here
             Node *temp = head;
             while (temp && temp->next){
                  swap(temp->data , temp ->next->data);
                  temp = temp->next ->next;
             }
             
             return head;
    }
};