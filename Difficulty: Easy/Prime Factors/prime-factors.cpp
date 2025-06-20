

class Solution {
  public:
  
    vector<int> AllPrimeFactors(int n) {
       // Code here
       vector<int>primes(n+1,0);
            primes[0]=1;
            primes[1]=1;
            for(int i=2;i<n;i++){
                   
                   if(primes[i]==0){
                         
                         for(int j=2;i*j<=n;j++){
                              
                              primes[i*j]=1;
                             
                         }
                            
                   }
            }
            
            vector<int>ans;
            for(int i=2;i<=n;i++){
                   
                    if (primes[i]==0 && n%i==0){
                         ans.push_back(i);
                    }
                   
            }
            
            return ans;
        
    }
};