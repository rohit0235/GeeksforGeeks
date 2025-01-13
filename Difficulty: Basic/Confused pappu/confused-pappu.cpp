//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
long long findDiff(long long n);

int main(){
    long t;
    cin>>t;
    while(t--){
        long long amount;
        cin>>amount;
        cout<<findDiff(amount)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends


long long findDiff(long long amount){
    
    int newnu=0;
    int oldn=amount;
    while (oldn){
        int s=oldn%10;
        if (s==6){
            newnu=newnu*10+9;
        }
        else{
             newnu=newnu*10+s;
        }
        oldn/=10;
    }

    int check=0;
    while (newnu){
        int m=newnu%10;
        check=check*10+m;
        newnu/=10;
    }

    return abs(amount-check);
    
    
}