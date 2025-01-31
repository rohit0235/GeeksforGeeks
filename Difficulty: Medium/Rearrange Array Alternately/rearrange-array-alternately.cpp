//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void rearrange(vector<int>& arr) {
          int n=arr.size();
          sort(arr.begin(),arr.end());
          // 1 2 3 4 5 6
          // 6 1 5 2 4 3
          // 6 1 5 2 4 3
           int minIndex = 0;
        int maxIndex = n-1;

        long M = arr[n-1] + 1;

        for(int i=0; i<n; i++){

            if(i%2 == 0){

                arr[i] = (arr[maxIndex]%M)*M + arr[i];
                maxIndex--;

            }else{

                arr[i] = (arr[minIndex]%M)*M + arr[i];
                minIndex++;

            }

        }

        for(int i=0; i<n; i++)
            arr[i] = arr[i]/M;
         
     
        // int index=0;
        // int i=0;
        // int j=n-1;
        // int firstmin=arr[0];
        // int firstmax=arr[n-1];
        // int futuremin=arr[1];
        // int futuremax=arr[n-2];
        // while (i<j){
        //             cout<<index<<endl;
        //           arr[index]=firstmax;
        //           cout<<arr[index]<<endl;
        //           index++;
        //          arr[index]=firstmin;
        //               cout<<arr[index]<<endl;
        //           index++;
        //         //  if (index<n){
                          
        //         //  }
               
        //           firstmax=futuremax;
        //           firstmin=futuremin;
        //           futuremin=arr[firstmin];
        //           futuremax=arr[firstmax];
        //           i++;
        //           j--;
        //  }
       
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends