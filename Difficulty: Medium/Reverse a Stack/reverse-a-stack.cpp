//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
// void solve(stack<int> &St)
void insertatbottom(stack<int> &St,int element){
               if (St.empty()){
                   St.push(element);
                   return ;
               }
               
               int top=St.top();
               St.pop();
             insertatbottom(St,element);
             St.push(top);
               
           }
    void Reverse(stack<int> &St){
          if (St.empty()) {
        return;
        }
        
        int top=St.top();
        St.pop();
        
        Reverse(St);
        insertatbottom(St,top);
        
        
        
        
        
        
        // queue<int>s;
        // while (!St.empty()){
        //     s.push(St.top());
        //     St.pop();
        // }
        
        // while (!s.empty()){
        //     St.push(s.front());
        //     s.pop();
        // }
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends