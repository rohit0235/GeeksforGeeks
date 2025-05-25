class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
   unordered_set<int> squares;

    // Insert all squares into a set
    for (int num : arr) {
        squares.insert(num * num);
    }

    int n = arr.size();

    // Check every pair (i, j)
    for (int i = 0; i < n; i++) {
        int a2 = arr[i] * arr[i];
        for (int j = i + 1; j < n; j++) {
            int b2 = arr[j] * arr[j];
            if (squares.count(a2 + b2)) {
                return true;
            }
        }
    }

    return false;
           
           
    }
};