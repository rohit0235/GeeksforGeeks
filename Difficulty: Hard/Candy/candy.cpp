class Solution {
  public:
    int minCandy(vector<int> &arr) {
        // code here
        int n =arr.size();
        
        vector<int>ans(n,1);
        
 
        for(int i=1;i<n;i++){
             if(arr[i]>arr[i-1]){
                  ans[i]=ans[i-1]+1;
             }
            //  mini+=ans[i];
             
        }
        
        for(int i=n-2;i>=0;i--){
             if(arr[i]>arr[i+1]){
                  ans[i]=max(ans[i],ans[i+1]+1);
             }
            //  mini+=ans[i];
             
        }
        
        // // if(arr[n-1]>arr[n-2]) ans[n-1]+=1;
        
        // for(int i=1;i<n-1;i++){
        //       if(arr[i]>arr[i-1] && arr[i]>arr[i-1]){
        //           ans[i] = max(arr[i+1]+1,arr[i-1]+1);
        //       }
              
        //       else if(arr[i]<arr[i-1] && arr[i]<arr[i-1]){
        //           ans[i] =1;
        //       }
              
        //       else if (arr[i]>arr[i-1] && arr[i]<arr[i+1]){
        //               ans[i]=ans[i-1]+1;
        //       }
        //       else if (arr[i]<arr[i-1] && arr[i]>arr[i+1]){
        //               ans[i]= ans[i-1]+1;
        //       }
        
              
        // }
   
                // for(int i:ans)cout<<i<<endl;
    
     

        return accumulate(ans.begin(),ans.end(),0) ;   
   
    }
};
