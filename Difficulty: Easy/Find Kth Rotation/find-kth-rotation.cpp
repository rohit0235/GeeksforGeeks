// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n=arr.size();
        int count=1;
        
        for(int i=n-1;i>0;i--){
           
           if (arr[i]<arr[i-1]){
               return i;
           }
          
            
        }
        return 0;
    
        
        
        
        
        
    }
};

