class Solution {
  public:
  
  
    bool pos (int mid , vector<int>&arr , int k ){
         
           
             int n =arr.size();
             
             int cnt =1;
             
             int pagesum=0;
             
             for(int i:arr){
                  
                    if (pagesum+i>mid){
                          pagesum=i;
                          cnt++;
                    }else{
                             pagesum+=i;
                    }
                    
             }
             
             return cnt<=k;
           
    }
    int findPages(vector<int> &arr, int k) {
        // code here
              
              int n =arr.size();
              
              
              if (k>n)  return -1;
              
              int l= *max_element(arr.begin(),arr.end());
              int r =accumulate(arr.begin(),arr.end(),0);
              
              
              int ans =-1;
                 
                 
              while (l<=r){
                    
                    int mid = l+(r-l)/2;
                    
                    
                    if (pos(mid , arr, k)){
                            
                            ans =mid ;
                            r = mid -1;
                        
                    }
                    
                    else  l = mid+1;
                     
              }
              
              return ans ;
              
              
    }
};