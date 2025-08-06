class Solution {
  public:
    int romanToDecimal(string &s) {
         
           int n =s.size();
            
           unordered_map<string ,int >mp={
                  {"IX",9},
                 {  "XL",40},
                 {  "XC",90},
                  { "CM",900},
                  { "CD",400},
                  { "M",1000},
                 {  "C",100},
                  { "D",500},
                   {"I",1},
                  { "L",50},
                  { "X",10},
                 {  "IV",4},
                 {  "V",5}
           };
           
           int result =0;
           int i=0;
           for(i=0;i<n-1;i++){
                   
                   string str = s.substr(i,2);
                   
                   if (mp.find(str)!=mp.end()){
                        result+=mp[str];
                        i++;
                   }
                   else{
                          result+=mp[s.substr(i,1)];
                   }
                   
                //   cout<<result<<endl;
                // MMDCCCXCIII
                   
           }
           
           if (i<n){
                result+=mp[s.substr(i,1)];
           }
           
           
           return result;
           
              
    }
};