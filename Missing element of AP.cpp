
class Solution {
  public:
    int findMissing(vector<int> &arr) {
         
             int n = arr.size();
        int d = (arr[n-1] - arr[0])/n;
        
        int low = 0;
        int high = n-1;
        int mid = 0;
        
        while(low < high)
        {
            mid = (low+high)/2;
            if(arr[0] + mid*d == arr[mid])
            {
                low = mid+1;
            }
            else
            {
                high = mid;
            }
        }
        
        return arr[low] - d;

        
    }
};
