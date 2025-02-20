//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  vector<double>  getMedian(vector<int>& arr) {
    vector<double> ans;
    priority_queue<int> left; // Max-heap
    priority_queue<int, vector<int>, greater<int>> right; // Min-heap

    for (int i = 0; i < arr.size(); i++) {
        // Insert into max-heap
        if (left.empty() || arr[i] <= left.top()) {
            left.push(arr[i]);
        } else {
            right.push(arr[i]);
        }

        // Balance the heaps
        if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        } else if (right.size() > left.size()) {
            left.push(right.top());
            right.pop();
        }

        // Find median
        if (left.size() == right.size()) {
            ans.push_back((left.top() + right.top()) / 2.0);
        } else {
            ans.push_back(left.top());
        }
    }

    return ans;
}
    // vector<double> getMedian(vector<int> &arr) {
           
    //       vector<double>ans;
    //       ans.push_back(arr[0]);
           
    //       for (int i=1;i<arr.size();i++){
    //               sort(arr.begin(),arr.begin()+i+1);
    //               if (i%2!=0){
                        
    //                     double mid = (arr[(i/2)]+arr[(i+1)/2])/2.0;
    //                     ans.push_back(mid);
    //               }
    //               else{
    //                   ans.push_back(arr[i/2]);
    //               }
    //       }
           
    //       return ans;
    // }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends