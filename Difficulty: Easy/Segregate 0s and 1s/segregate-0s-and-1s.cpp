// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &nums) {
        // code here
        int l =0;
        for(int i=0;i<nums.size();i++){
             
             if (!nums[i]){
                     swap(nums[i],nums[l]);
                     l++;
             }
        }
        
    }
};