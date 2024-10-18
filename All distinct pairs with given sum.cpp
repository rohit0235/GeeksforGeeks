 vector<vector<int>> distinctPairs(vector<int> &arr, int target) {
       
           vector<vector<int>> sums;
    unordered_set<int> seen;       // To store elements we have already visited
    set<vector<int>> uniquePairs;  // To store unique pairs

    for (int num : arr) {
        int complement = target - num;

        // If complement exists in 'seen', we found a valid pair
        if (seen.find(complement) != seen.end()) {
            vector<int> pair = {min(num, complement), max(num, complement)};
            // Ensure the pair is unique
            if (uniquePairs.find(pair) == uniquePairs.end()) {
                sums.push_back(pair);
                uniquePairs.insert(pair);
            }
        }
        
        // Insert the current number into the seen set
        seen.insert(num);
    }
        sort(sums.begin(), sums.end());
    return sums;

        // sort(arr.begin(),arr.end()); 
        // vector<vector<int>>sums;   set<vector<int>>s;
        // for (int i=0;i<arr.size();i++){
        //     // vector<int>s;
         
        //     for (int j=i+1;j<arr.size();j++){
        //         if (arr[i]+arr[j]==target){
        //             if (s.find({arr[i],arr[j]})==s.end()){
        //                  sums.push_back({arr[i],arr[j]});
        //                  s.insert({arr[i],arr[j]});
        //             }
                      
        //         }
        //     }
        // }
        // return sums;
    }
