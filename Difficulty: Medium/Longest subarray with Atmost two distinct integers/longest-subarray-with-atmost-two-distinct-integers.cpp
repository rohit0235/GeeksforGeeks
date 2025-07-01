class Solution {
  public:
    int totalElements(vector<int> &arr) {
        
               int n =arr.size();
               unordered_map<int,int>mp;
               
               int maxi =0;
               int l=0;
               int r;
               for( r=0;r<n;r++){
                    
                     mp[arr[r]]++;
                     
                     while (mp.size()>2 && l<r){
                           
                            mp[arr[l]]--;
                            if (mp[arr[l]]==0) mp.erase(arr[l]);
                            l++;
                           
                     }
                    //  cout<<r<<" "<<l<<endl;
                     
                     maxi=  max(maxi , r-l+1);
                          
                     
               }
               
                //  while (mp.size()>2 && l<n){
                           
                //             mp[arr[l++]]--;
                //             if (mp[arr[l]]==0) mp.erase(arr[l]);
                            
                //             if (mp.size()<=2)
                //          maxi=  max(maxi , r-l+1);
                           
                //   }
                
               
               return maxi;
        
    }
};