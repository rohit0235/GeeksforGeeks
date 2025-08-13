class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        
                    int m = arr.size();
                
                //  int n = arr.size()/2;
                 
                  int total =0;
                  
                  priority_queue<int,vector<int>,greater<int>>pq;
                 
                  for(int i=0;i<m;i++){
                        //   if (arr[i]>=k){
                            int divide = (arr[i]+k-1)/k;
                            // cout<<arr[i]-divide*k<<endl;;
                            // cout<<divide*k-arr[i]<<endl;
                            pq.push(divide*k-arr[i]);
                        //   }
                  }
                   

                  
                    for(int i=0;i<(m+1)/2;i++){
                        
                        if (pq.empty())break;
                        total+=pq.top();
                     
                        pq.pop();
                  }
                  
                  return total;
                 
                
                   
    }
};