//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


// } Driver Code Ends

/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        
        Node *zh=new Node(-1);
        Node *oh=new Node(-1);
        Node *th=new Node(-1);
        
        Node *z=zh;
        Node *o=oh;
        Node *t=th;
        
        Node *temp=head;
        
        while (temp){
             
             if (temp->data==0){
                  z->next=temp;
                  z=z->next;
             }
             
             else if (temp->data==1){
                  o->next=temp;
                  o=o->next;
             }
             
             else {
                  t->next=temp;
                  t=t->next;
             }
              
              temp=temp->next;
             
             
             
        }
        
        if (oh->next){
             z->next=oh->next;
        }
        
        else{
             z->next=th->next;
        }
        
        o->next=th->next;
        t->next=NULL;
        
        
        head=zh->next;
        delete zh;
        delete oh;
        delete th;
        return head;
        
        
        
        
    }
};



//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        Node* newHead = ob.segregate(head);
        printList(newHead);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends