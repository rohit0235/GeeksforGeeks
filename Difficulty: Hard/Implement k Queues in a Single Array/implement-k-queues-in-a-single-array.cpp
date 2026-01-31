class kQueues {

  public:
    
    vector<queue<int>>s;
    int n1=0;
    kQueues(int n, int k) {
        // Initialize your data members
        s.resize(k);
        n1=n;

    }

    void enqueue(int x, int i) {
        // enqueue element x into queue i
             s[i].push(x);
             n1--;
    }

    int dequeue(int i) {
        // dequeue element from queue i
        if(s[i].empty()) return -1;
            n1++;
        int top= s[i].front();
        s[i].pop();
        return top;
        
    }

    bool isEmpty(int i) {
        // check if queue i is empty
                if(s[i].empty()) return true;
                return false;
    }

    bool isFull() {
        // check if array is full
                //         if(s[i].size()==n1) return true;
                // return false;
                // cout<<n1<<endl;
           return n1==0;
    }
};
