//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    
    double power(double b, int e) {
        
         if (b==0) return 0;
         if (e==0) return 1;
   
        //   double ans=b;
        //   for (int i=0;i<abs(e)-1;i++){
        //      ans*=b;
        //     //  cout<<ans<<" ";
              
        //   }
          if (e<0) return 1/power( b,-e) ;
          
           double temp=power(b,e/2);
           
           if (e%2==0) {
                return temp*temp;
           }
           else{
               return b*temp*temp;
           }

          
        // return pow(b,e);
    }
};

//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double b;
        cin >> b;
        int e;
        cin >> e;
        Solution ob;
        cout << ob.power(b, e) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends