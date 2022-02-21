// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        
    double d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
    if (d >= 0) {
       double x=(-b + sqrt_val) / (2.0 * a) ;
       double y=(-b - sqrt_val) / (2.0 * a);
       return {floor(max(x,y)),floor(min(x,y))};
    }
    else // d < 0
    {
         return {-1};
    }
}
    
};

// { Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends