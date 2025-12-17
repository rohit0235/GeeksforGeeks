class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        int i=0;

        vector<vector<int>>ans;
        while (i<n){
                     int start = arr[i][0];
        int end = arr[i][1];
               int j = i+1;
               while (j<n){
                    if (arr[j][0]<=end){
                           end = max(end , arr[j][1]);
                           j++;
                    }
                    else{
                         break;
                    }
                    
               }
               i=j;
               ans.push_back({start, end});
               
        }
        return ans;
        
    }
};