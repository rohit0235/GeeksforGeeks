class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
          
               int n = arr.size();
              
               sort(arr.begin(),arr.end());
               sort(dep.begin(),dep.end());
               
               
                 int i=0;
                 int j =0;
                 int maxp = 1;
                 int p  = 0;
                 
                while (i<n && j<n ){
                      
                        if (arr[i]<=dep[j]){
                              p++;
                                maxp = max(maxp , p);
                        
                              i++;
                        }
                        else{
                             p--;
                             j++;
                        }
                        
                      
                 }
                 
                 return maxp;
              
            
               
               
    }
};
