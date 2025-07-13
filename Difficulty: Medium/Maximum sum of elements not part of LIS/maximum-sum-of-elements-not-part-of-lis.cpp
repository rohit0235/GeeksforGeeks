class Solution {
  public:
  
  
//   int solve(vector<int>&arr ,  int sum , int i, int prev){
        
//             if (i>=arr.size()) return sum;
            
//             int take =0;
//             if (prev<arr[i]){
//                   take = arr[i]+solve(arr,sum+arr[i],i+1,arr[i]);
//             }

//             int nottake = solve(arr, sum , i+1 , prev);
            
//             return min(take,nottake);
//   }
  
  
    int nonLisMaxSum(vector<int>& Arr) {
        int n =Arr.size();
 vector<int> lis;
        int sum=0,lisSum[n+1]; //lisSum[i] -> stores sum of lis of length i
        lisSum[0]=0;
        for(int i=0;i<n;i++){
            sum+=Arr[i];
            int index = lower_bound(lis.begin(),lis.end(),Arr[i])-lis.begin();
            if(index==lis.size())
                lis.push_back(Arr[i]);
            else
                lis[index]=Arr[i];
            lisSum[index+1]=lisSum[index]+Arr[i];
        }
        return sum-lisSum[lis.size()];
          
            
            
    }
};