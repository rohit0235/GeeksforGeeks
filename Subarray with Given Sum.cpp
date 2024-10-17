vector<int> subarraySum(vector<int>& arr, int sum) {
          int n=arr.size();

        for (int i=0;i<n;i++){
       // 1 2 3
       if (arr[i]==sum){
              return {i+1,i+1};
       }
            int currentsum=0;
            for (int j=i;j<n;j++){     
                currentsum+=arr[j];
        
                if (currentsum==sum){
                    return {i+1,j+1};
                }
                else if (currentsum>sum){
                    // currentsum+=arr[j];
                    break;
                }
            }
            
      }
      return {};
        
    };
