class Solution {
  public:
    void sortIt(vector<int>& arr) {
           int n =arr.size();
           sort(arr.rbegin(),arr.rend());
            //  1 2 3 4 5 7 10
            //  7 5 3 1 4 10 2 
            //  10 7 5 4 3 2 1
            
            int odd =0;
            
            for(int i=0;i<n;i++){
                 
                  if (arr[i]%2!=0){
                      swap(arr[i],arr[odd]);
                      odd++;
                  }
                
            }
            // while (even<odd);
            
            // agar right even hai aur left odd ho to ++;
            /// else 
            sort(arr.begin()+odd , arr.end());
            
    }
};