//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends

// User function template for C++

/*
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
class Solution {
  public:
    Node* divide(Node* head) {
        // code here
         Node *curr=head;
         Node *head1=new Node(0);
         Node *list=head1;
         
         
         while (curr){
               
               if (curr->data%2==0){
                    list->next=new Node(curr->data);
                    list=list->next;
               }
               
               curr=curr->next;
               
         }
         curr=head;
         
         while (curr){
               
               if (curr->data%2==1){
                    list->next=new Node(curr->data);
                    list=list->next;
               }
               
               curr=curr->next;
               
         }
         
         
         return head1->next;
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty())
            continue;

        int data = arr[0];
        int N = arr.size();
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 1; i < N; ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        Node *ans = ob.divide(head);
        printList(ans);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends