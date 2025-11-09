class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        // code here
          if (txt.find(pat)!=string::npos){
               return txt.find(pat); 
          }
          return -1;
    }
};