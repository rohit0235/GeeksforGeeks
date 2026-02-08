// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
            
            int maxi=arr[0];
            int n=arr.size();
            int leftsum=1;
            int  rightsum=1;
            for (int i=0;i<n;i++){
                    leftsum*=arr[i];
                    rightsum*=arr[n-i-1];
                 maxi=max(maxi,max(leftsum,rightsum));
                if (leftsum==0)   leftsum=1;
                if (rightsum==0)   rightsum=1;
                
               
            }
            return maxi;
            
            
    }
};
