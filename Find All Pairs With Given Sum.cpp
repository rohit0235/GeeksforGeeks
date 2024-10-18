    vector<vector<int>> findAllPairs(vector<int> &arr, int target) {
        // Code here
        
        vector<vector<int>>sums;
        for (int i=0;i<arr.size();i++){
            for (int j=i+1;j<arr.size();j++){
                if (arr[i]+arr[j]==target){
                    sums.push_back({i,j});
                }
            }
        }
        return sums;
    }
