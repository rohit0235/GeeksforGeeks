class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
            // s1=s1+s1;
            string t = s1+s1;
            if (t.find(s2)!=string::npos) return true;
            // reverse(s1.begin(),s1.end());
            // t = s1+s1;
            //   if (t.find(s2)!=string::npos) return true;
               return false;
    }
};