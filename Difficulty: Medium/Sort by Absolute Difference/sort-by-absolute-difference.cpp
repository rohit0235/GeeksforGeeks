class Solution {
  public:
    
     int c;
    static bool cmp(int a ,int b){
          
            if (abs(a)<abs(b)){
                   return true;
            }
            else{
                 return false;
            }
          
    }
    
    void rearrange(vector<int> &arr, int x) {
        
            for(int i=0;i<arr.size();i++){
                  arr[i]= (arr[i]-x);
            }
          
       
              stable_sort(arr.begin(),arr.end(),cmp);
                        
                //         for (int i = 0; i < arr.size() - 1; i++) 
                // {
            
                //     int min = i;
                //     for (int j = i + 1; j <  arr.size() ; j++)
                //         if (abs(arr[min] )> abs(arr[j]))
                //             min = j;
            
                //      int key = arr[min];
       
                //       for(int k=min;k>i;k--)  arr[k]=arr[k-1];
                  
                //       arr[i] = key;
                // }
            
           for(int i=0;i<arr.size();i++){
              arr[i]= arr[i]+x;
           }
 
           
        
    }
};