//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/
int size(Node *head){
    
    Node *temp=head;
    int count=0;
    while (temp){
        count++;
        temp=temp->next;
    }
    return count;
}

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
           
           if (head==NULL) return head;
           int len=size(head);
           
           if (k>len) k=len;
           int count=0;
           Node *prev=NULL;
           Node *curr=head;
           
           Node *next;
           
           while (count<k){
               
               
               next=curr->next;
               
               curr->next=prev;
               
               prev=curr;
               
               curr=next;
               
               count++;
           }
           
          if (next!=NULL) head->next=reverseKGroup(next,  k);
           return prev;
           
                 
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.reverseKGroup(head, k);
        printList(head);
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends