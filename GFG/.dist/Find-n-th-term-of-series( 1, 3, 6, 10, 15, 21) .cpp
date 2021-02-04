// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    int findNthTerm(int N) {
        // code here11111
        return (N+1)*N/2;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.findNthTerm(N) << endl;
    }
    return 0;
}  // } Driver Code Ends