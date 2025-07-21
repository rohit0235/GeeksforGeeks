class Solution {
  public:
    int missingNumber(vector<int> &arr) {
           
           int n =arr.size();
           sort(arr.begin(),arr.end());
           int ans =1;
           for(int i=0;i<n;i++){
                if (arr[i]==ans) ans++;
           }
           return ans;
           
    }
};