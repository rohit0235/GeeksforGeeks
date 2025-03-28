//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
struct comp {
    bool operator()(pair<int, int> a, pair<int, int> b) {
        
        return a.second > b.second;  // Max heap based on second value
    }
};
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
            priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
            
            for(int i=0;i<start.size();i++){
                   pq.push({start[i],finish[i]});
            } 
            // int k=pq.size();
            // while (k--){
            //     pair<int,int> i=pq.top();
            //     cout<<i.first<<" "<<i.second<<" "<<endl;
            //     pq.pop();
                
            // }
            
            int count=0;
            int finis=0;
            while (!pq.empty()){
                 
                //   pair<int,int> k=pq.top();
                   
                //   pq.pop();
                   
                   if (!pq.empty() && finis<pq.top().first){
                            count++;
                            finis=pq.top().second;
                   }
                //   else{
                //         finish=
                //   }
                   
                   pq.pop();
            }
            
            
            return count;
            // return 0;
            
            
           
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
        vector<int> start;
        int num;
        while (ss >> num)
            start.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> finish;
        ss.str(input);
        while (ss >> num)
            finish.push_back(num);

        Solution obj;
        cout << obj.activitySelection(start, finish) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends