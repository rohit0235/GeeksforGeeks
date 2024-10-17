// 2 Sum - Find a pair with given sum

    vector<int> twoSum(vector<int> &arr, int target) {
        int n=arr.size();
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (arr[i]+arr[j]==target){
                    return {arr[i],arr[j]};
                }
            }
        }
        return {};
    }
