//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {
            // your code here    
              
                int row=Mat.size();
                int index=INT_MAX;
                int ans=0;
                for(int i=0;i<row;i++){
                    
                    int lower=lower_bound(Mat[i].begin(),Mat[i].end(),1)-Mat[i].begin();
                    // cout<<lower;  
                    // cout<<ans<<index<<" "<<lower<<endl;
                    if (index>lower){
                      
                        ans=i;
                        index=lower;
                    }
                    
                }
                
                return ans;
            
            
            
        }
};


//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends