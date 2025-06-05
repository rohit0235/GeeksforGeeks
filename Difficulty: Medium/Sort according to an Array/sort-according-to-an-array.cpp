// User function template in C++

class Solution {
  public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]

    // // Function to sort an array according to the other array.
    //  static bool cmp(int a ,int b){
             
                
    //  }

    
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) {
        // Your code here
            unordered_map<int, int> mp;
            
             for(int i=0;i<A2.size();i++){
             
                  mp[A2[i]]++;
             }
             
            unordered_map<int, int> mp2;
            for(int i=0;i<A1.size();i++){
                   mp2[A1[i]]++;
             }
             vector<int>ans;
             
            //  for(auto i:mp2){
                   
            //       int check = mp[i.first];
                   
            //       while (check--){
            //             ans.push_back(i.first);
            //       }
                   
            //  }
                 
                 for(int i:A2){
                        
                        int j = mp2[i];
                        
                        while (j--){
                             ans.push_back(i);
                        }
                 }
             vector<int>check;
             
             for(int i:A1){
                  if (mp.find(i)==mp.end()){
                       check.push_back(i);
                  }
             }
             
             sort(check.begin(),check.end());
             for(int i:check){
                     ans.push_back(i);
             }
               return ans;
                
        
    }
};