int findPlatform(vector<int>& arr, vector<int>& dep) {

           sort(arr.begin(),arr.end());
           sort(dep.begin(),dep.end());
           int i=1;
           int j=0;
           int maxi=1;
           int n=arr.size();
           while (i<n && j<n){
               
               if (arr[i]>dep[j]){
                   i++;
                   j++;
               }
               
               else{
                   maxi++;
                   i++;
               }
               
           }
           return maxi;


    }
