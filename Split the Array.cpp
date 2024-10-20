class Solution {
  public:
    int countgroup(vector<int>& arr) {
           
           int n=arr.size();
              int ans = 0, mod = 1e9 + 7;
              for(int i:arr){
                  ans^=i;
              }
              
           return ans==0 ? 2*(n-1)-1 :0; 
      
    }
};
