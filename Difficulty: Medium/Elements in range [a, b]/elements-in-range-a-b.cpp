class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &q) {
        // code here
              sort(arr.begin(),arr.end());
                  vector<int> ans;
              for(auto i:q){
                    int l = lower_bound(arr.begin(),arr.end(),i[0])-arr.begin();
                    int r = upper_bound(arr.begin(),arr.end(),i[1])-arr.begin();
                    // cout<<r<<" "<<l;
                     ans.push_back(r-l);
              }
              return ans;
    }
};