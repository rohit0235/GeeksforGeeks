//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    if (arr.empty()) {
        return NULL;
    }
    int val = arr[0];
    int size = arr.size();

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        val = arr[i];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

Node *reverse(Node* head){
     
     Node *current=head;
     Node *prev=NULL;
     Node *next;
     
     while (current){
          next=current->next;
          current->next=prev;
          
          prev=current;
          
         current=next;
     }
     return prev;
    
}
class Solution {
  public:
    Node* addTwoLists(Node* num1, Node* num2) {
           
           num1 = reverse(num1);
        num2 = reverse(num2);

        if (num1 == NULL) return num2;
        if (num2 == NULL) return num1;

        int carry = 0;
        Node* dummy = new Node(-1); // Dummy node to simplify operations
        Node* current = dummy;     // Pointer to build the result list

        while (num1 || num2 || carry) {
            int sum = carry; // Start with the carry value

            if (num1) {
                sum += num1->data;
                num1 = num1->next;
            }

            if (num2) {
                sum += num2->data;
                num2 = num2->next;
            }

            // Create a new node for the digit
            current->next = new Node(sum % 10);
            current = current->next;

            // Update the carry
            carry = sum / 10;
        }

        // Reverse the result list
        Node* result = reverse(dummy->next);

        // Clean up leading zeros
        while (result && result->data == 0 && result->next) {
            result = result->next;
        }

        return result;
      
      
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input

    while (t--) {
        Node* num1 = buildList();
        Node* num2 = buildList();
        Solution ob;
        Node* res = ob.addTwoLists(num1, num2);
        printList(res);
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends