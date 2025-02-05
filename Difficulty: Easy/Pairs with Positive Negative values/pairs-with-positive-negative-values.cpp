//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> posNegPair(vector<int> &arr) {
            sort(arr.begin(),arr.end());
            vector<int>ans;
            int n =arr.size();
            unordered_map<int,int>mp;
            for (int i=0;i<n;i++){
                  mp[arr[i]]++;
                 
            }
            
            for (int i=0;i<n;i++){
                  
                 if (arr[i]>0 && mp.find(-1*arr[i])!=mp.end()){
                      
                        ans.push_back(-1*arr[i]);
                        ans.push_back(arr[i]);
                        mp[-1*arr[i]]--;
                        if (mp[-1*arr[i]]<1){
                              mp.erase(-1*arr[i]);
                        }
                 }
            }
            
            return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v = obj.posNegPair(arr);

        if (v.size() == 0)
            cout << "0";

        for (auto it : v)
            cout << it << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends