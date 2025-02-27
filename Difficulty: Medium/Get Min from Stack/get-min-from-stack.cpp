//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    stack<int>s;
    int mini=-1;
    Solution() {
       
    }

    // Add an element to the top of Stack
    void push(int x) {
        if (s.empty()) {
             mini=x;
             s.push(x);
        }
        else{
             
             if (x<mini){
                  s.push(2*x-mini);
                 mini=x;
             }
             else{
                 s.push(x);
             }
        }
        
    }

    // Remove the top element from the Stack
    void pop() {
       if (s.empty())  return ;
    
        int top=s.top();
        s.pop();
        if (top<mini){
             mini=2*mini-top;
        }
     
    }

    // Returns top element of the Stack
    int peek() {
          if (s.size()==0) return -1;
             int top=s.top();
             if (top<mini){
                  return mini;
             }
             else{
                  return top;
             }
          
    }

    // Finds minimum element of Stack
    int getMin() {
             if (s.empty()) return -1;
             return mini;
               
         
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        Solution ob;

        while (q--) {
            int qt;
            cin >> qt;

            if (qt == 1) {
                // push
                int att;
                cin >> att;
                ob.push(att);
            } else if (qt == 2) {
                // pop
                ob.pop();
            } else if (qt == 3) {
                // peek
                cout << ob.peek() << " ";
            } else if (qt == 4) {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends