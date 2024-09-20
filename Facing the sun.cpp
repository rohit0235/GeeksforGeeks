class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        // code here
        int n=height.size();
        int maxi=height[0];
        int count=1;
        for (int i=1;i<n;i++){
                    maxi=max(maxi,height[i-1]);
                    if (height[i]>maxi){
                        count++;
                    }
        }
        return count;
        
        
    }
};
