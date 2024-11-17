class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
             int n =arr.size();
            for (int i=0;i<n;i++){
                
                for (int j=i+1;j<n;j++){
                    
                    if (arr[i]>arr[j]){
                        swap(arr[i],arr[j]);
                    }
                }
            }

      
    }
};
