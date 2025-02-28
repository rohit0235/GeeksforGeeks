//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool isInteger(const std::string &str) {
    int i = 0;

    if (str[i] == '-' || str[i] == '+') i++; // Handle negative and positive numbers

    while (i < str.size()) {
        if (!isdigit(str[i])) return false;  // Check if all remaining characters are digits
        i++;
    }
    return !str.empty() && i > (str[0] == '-' || str[0] == '+');
}
    int evaluate(vector<string>& arr) {
         
         int result=INT_MIN;
         stack<int>s;
         int n=arr.size();
        if (n==1) return stoi(arr[0]);


         for(int i=0;i<n;i++){
            //   cout<<result<<" ";
            //   if (!s.empty()) cout<<s.top()<<" ";
              if (isInteger(arr[i])){
                    s.push(stoi(arr[i]));
              }
              
              else {
                   
               
                        
                        int top=s.top();
                        s.pop();
                        int second=s.top();
                        s.pop();
                        if (arr[i][0]=='+'){
                            result=top+second;
                        }
                    else    if (arr[i][0]=='*'){
                            result=top*second;
                        }
                    else    if (arr[i][0]=='/'){
                            result=second/top;
                        }
                       else if (arr[i][0]=='-'){
                            result=second-top;
                        }
                        
                        s.push(result);
                
                //   else{
                //       int top=s.top();
                //       s.pop();
                           
                //       if (arr[i][0]=='+'){
                //             result+=top;
                //         }
                //     else    if (arr[i][0]=='*'){
                //             result*=top;
                //         }
                //     else    if (arr[i][0]=='/'){
                //             result/=top;
                //         }
                //       else if (arr[i][0]=='-'){
                //             result-=top;
                //         }
                      
                //   }
              }
              
         }
         
         return result;
    }
};


//{ Driver Code Starts.

int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<string> arr;
        while (ss >> str) {
            arr.push_back(str);
        }
        Solution ob;
        cout << ob.evaluate(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends