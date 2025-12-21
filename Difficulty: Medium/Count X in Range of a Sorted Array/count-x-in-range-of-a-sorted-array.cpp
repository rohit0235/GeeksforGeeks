class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        
           int n =  queries.size();
           vector<int>ans;
           for(auto i:queries){
                 int l = i[0];
                 int r = i[1];
                 int k = i[2];
                 
                 int mini = lower_bound(arr.begin()+l,arr.begin()+r+1,k)-arr.begin();
                 int maxi = upper_bound(arr.begin()+l,arr.begin()+r+1,k)-arr.begin();
                //  int maxi = upper_bound(arr.begin(),arr.end(),k)-arr.begin();
                 ans.push_back(maxi- mini);
           }
           return ans;
        
    }
};