class Solution {
  public:
    int countTriangles(vector<int>& arr) {
           
             int n =arr.size();
             
             // 4 10  13 20
             // 3 4 6 7
             
             // will do in n^2logn
             
             sort(arr.begin(),arr.end());
             int count =0;
             for(int i=0;i<n;i++){
                   for(int j=i+1;j<n;j++){
                       
                        //   for(int k=j+1;k<n;k++){
                               
                                
                        //         if (arr[i]+arr[j]>arr[k] && arr[j]+arr[k]>arr[i] && arr[k]+arr[i]>arr[j]){
                                     
                        //               count++;
                        //         }
                                 
                        //   }
                         
                         
                            int l= j+1;
                            int r= n-1;
                            int sum = arr[i]+arr[j];
                            int ans = j;
                            while (l<=r){
                                  
                                  int mid = l+(r-l)/2;
                                //   cout<<arr[mid]<<" "<<sum<<" ";
                                  if (arr[mid]>=sum){
                                       
                                         r= mid-1;
                                  }else{  
                                         ans = mid;
                                         l = mid+1;
                                  }
                                   
                            }
                       
                            count+=(ans-j);
                            // cout<<ans<<endl;
                   }
             }
             
             return count;
        
    }
};
