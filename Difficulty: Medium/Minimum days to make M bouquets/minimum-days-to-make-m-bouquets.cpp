class Solution {
  public:
  
  
    bool ispos(vector<int>&arr , int mid , int k ,int m){
         
               int count =0;
               int c = 0;
               int n =arr.size();
               for(int i=0;i<n;i++){
                     
                      if (c>=k){
                           count++;
                           c=0;
                      }        
                      if (arr[i]>mid){
                            c=0;
                      }
                      else {
                           c++;
                      }
                     
               }
              if (c>=k){
                           count++;
                           c=0;
             }   
               
            //   cout<<mid<<" "<<count<<endl;
               
               return count>=m;
           
    }
  
  
  
    int minDaysBloom(vector<int>& arr, int k, int m) {
          
                  int n =arr.size();
                  
                  
                  if (m*k>n) return -1;
                  
                  int low = *min_element(arr.begin(),arr.end());
                  int  high = *max_element(arr.begin(),arr.end());
                  
                  int ans = low;
                  while (low<=high){
                       
                        
                           int mid = low + (high-low)/2;
                           
                           if (ispos(arr, mid , k, m )){
                                  ans = mid;
                                  high = mid-1;
                           }
                           
                           else{
                                low = mid +1;
                           }
                         
                          
                  }
                  
                  return ans ;
                   
                  
        
    }
};